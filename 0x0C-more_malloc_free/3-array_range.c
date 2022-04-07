#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - return pointer to array
 * @min: minimum
 * @max: maximum
 * Returm: pointer to array
 */
int *array_range(int min, int max)
{
	int len;
	int *p, *s;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	s = p;

	if (!p)
	{
		return (NULL);
	}
	while (len > 0)
	{
		*p = min;
		min++;
		p++;
		len--;
	}
	p = s;
	return (p);
}
