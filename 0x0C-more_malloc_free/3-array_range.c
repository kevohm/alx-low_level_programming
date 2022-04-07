#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	while(len > 0)
	{
		*p = min;
		min++;
		p++;
		len--;
	}
	p = s;
	return p;
}
