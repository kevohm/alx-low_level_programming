#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: pointer to hasg table
 * Return: nothing
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;


	printf("{")
	for (;i < ht->size; i++)
	{
		printf("'%s': '%s'")
		if (i != (ht->size - 1))
			printf(", ")
	}
	printf("}\n")
}
