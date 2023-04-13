#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int num;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (num = 0; num < ht->size; num++)
	{
		current = ht->array[num];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
