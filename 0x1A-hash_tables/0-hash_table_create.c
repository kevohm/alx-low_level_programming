#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (!size)
		return (NULL);
	newTable = malloc(sizeof(hash_node_t *));
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	newTable->size = size;
	if (!newTable)
	{
		free(newTable->array);
		free(newTable);
		return (NULL);
	}
	return (newTable);
}
