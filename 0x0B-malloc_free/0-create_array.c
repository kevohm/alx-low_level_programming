#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - prints buffer in hexa
 * @c: the character to initialize array with
 * @size: the size of the memory to print
 * Return: char
 */
char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);
	if (size == 0 || !p)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(p + i) = c;
		++i;
	}
	return (p);
}
