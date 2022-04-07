#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	p = malloc(size * nmemb);
	if (!p)
	{
		return (NULL);
	}
	return (p);
}
