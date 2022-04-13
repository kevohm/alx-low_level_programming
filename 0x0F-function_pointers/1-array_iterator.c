#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print each char
 * @array: array of char
 * @size: sizeof array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || !array)
	{
		return;
	}
	while (i < size)
	{
		action(*(array +  i));
		i++;
	}
}
