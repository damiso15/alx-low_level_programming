#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int num;
	hash_node_t *current;
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
				first = 0;
			else
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}

	printf("}\n");
}
