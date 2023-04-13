#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int num;

	if (ht == NULL)
		return;

	printf("{");

	for (num = 0; num < ht->size; num++)
	{
		if (ht->array[num])
		{
			printf("'%s': '%s'", ht->array[num]->key, ht->array[num]->value);
		}
	}

	printf("}\n");
}
