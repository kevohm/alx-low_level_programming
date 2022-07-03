#include "hash_tables.h"
/**
 * key_index: gives you the index of a key.
 * @key: character key
 * @size: size of hash array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key) % size;
	return (i);
}
