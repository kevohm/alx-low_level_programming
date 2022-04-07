#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	p = malloc(size * nmemb);
	if (!p)
	{
		return (NULL);
	}
	for(i = 0; i < (size * nmemb); i++)
	{
		p[i] =  0;
	}
	return (p);
}
