#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *ret = NULL;

	if (size > 0)
	{
		ret = malloc(sizeof(hash_table_t));
		if (ret == NULL)
			return (NULL);
		ret->size = size;
		ret->array = malloc(sizeof(hash_node_t *) * size);
		if (ret->array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*((ret->array) + i) = NULL;
	}
	else
		return (NULL);
	return (ret);
}
