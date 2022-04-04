#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int count(char *p)
{
	int len = 0;
	while (*p)
	{
		p++;
		len++;
	}len++;
	return (len);
}
char *str_concat(char *s1, char *s2)
{
	char *q;
	char *p;
	int len;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	len = count(s1) + count(s2) - 1;
	q = malloc(len * sizeof(char));
	p = q;
	if (q == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		*q = *s1;
		q++;
		s1++;
	}
	while (*s2)
	{
		*q = *s2;
		s2++;
		q++;
	}
	q = '\0';
	q = p;
	return (q);
}
