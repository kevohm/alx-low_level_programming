#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action)
	{
		return;
	}
	while (i < size)
	{
		action(*(array +  i));
		i++;
	}
}
