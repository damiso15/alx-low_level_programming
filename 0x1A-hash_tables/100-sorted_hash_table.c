#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_shash_table;

	if (size == 0)
	{
		return (NULL);
	}

	new_shash_table = malloc(sizeof(shash_table_t));
	if (new_shash_table == NULL)
	{
		return (NULL);
	}

	new_shash_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_shash_table->array == NULL)
	{
		free(new_shash_table);
		return (NULL);
	}

	new_shash_table->size = size;
	new_shash_table->shead = NULL;
	new_shash_table->stail = NULL;

	return (new_shash_table);
}


/**
 * shash_table_set - a function that adds an element to the hash table
 * @ht: a function that adds an element to the hash table
 * @key: The key, string
 * key can not be an empty string
 * @value: The value corresponding to a key
 * value must be duplicated. value can be an empty string
 * Return: 1 as Successful and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *new_node, *temp;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}

		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp && strcmp(temp->key, new_node->key) < 0)
			temp = temp->snext;

		if (!temp)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->sprev = temp->sprev;
			new_node->snext = temp;

			if (temp->sprev)
				temp->sprev->snext = new_node;
			else
				ht->shead = new_node;

			temp->sprev = new_node;
		}
	}

	return (1);
}


/**
 * shash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: The key, string
 * key is the key you are looking for
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}


/**
 * shash_table_print - a function that print the hash table using the
 * sorted linked list
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int num;
	shash_node_t *current;
	int first;

	if (ht == NULL)
		return;

	printf("{");
	first = 1;
	for (num = 0; num < ht->size; num++)
	{
		current = ht->array[num];
		while (current)
		{
			if (first)
			{
				printf("'%s': '%s'", current->key, current->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", current->key, current->value);

			current = current->next;
		}
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - a function that print the hash tables key/value
 * pairs in reverse order using the sorted linked list
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int first;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current)
	{
		if (first)
		{
			printf("'%s': '%s'", current->key, current->value);
			first = 0;
		}
		else
		{
			printf(", '%s': '%s'", current->key, current->value);
		}

		current = current->sprev;
	}

	printf("}\n");
}


/**
 * shash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}

	free(ht->array);
	free(ht);
}
