#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - return pointer to alloc space
 * @b: size to allocate
 * Return: pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
