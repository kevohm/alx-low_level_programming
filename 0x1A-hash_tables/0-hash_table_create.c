#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);
	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	newTable->size = size;
	if (newTable->array == NULL)
		return (NULL);
	for (; i < size; i++)
		(newTable->array)[i] = NULL;
	return (newTable);
}
