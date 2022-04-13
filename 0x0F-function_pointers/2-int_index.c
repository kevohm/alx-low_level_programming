#include <stdio.h> 
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int s = 0;

	if(!array || !cmp)
	{
		return (-1);
	}
	while (s < size)
	{
		if (cmp(array[s]) != 0)
		{
			return (s);
		}
		s++;
	}
	return (-1);
}
