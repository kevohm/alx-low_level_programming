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
	}
	len++;
	return (len);
}
char *copy(char *c, char *d)
{
	while (*c)
	{
		*d = *c;
		c++;
		d++;
	}
	return (d);
}
char *str_concat(char *s1, char *s2)
{
	char *q;
	char *p;
	int len;

	if (s1 == NULL && s2 == NULL)
	{
		q = malloc(1);
		*q = '\0';
		return (q);
	}
	if (s1 == NULL)
	{
		len = count(s2);
		q = malloc(len * sizeof(char));
		p = q;
		q = copy(s2, q);
		q = '\0';
		q = p;
		return (q);
	}
	if (s2 == NULL)
	{
		len = count(s1);
		q = malloc(len * sizeof(char));
		p = q;
		copy(s1, q);
		q = '\0';
		q = p;
		return (q);
	}
	len = count(s1) + count(s2) - 1;
	q = malloc(len * sizeof(char));
	p = q;
	if (q == NULL)
		return (NULL);
	q = copy(s1, q);
	q = copy(s2, q);
	q = '\0';
	q = p;
	return (q);
}
