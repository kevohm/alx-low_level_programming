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
void copy(char *c, char *d)
{	 while(*c)
	{
		*d = *c;
		c ++;
		d ++;
	}
}
char *str_concat(char *s1, char *s2)
{
	char *q;
	char *p;
	int len;

	if (s1 == NULL)
	{
		len = count(s1) + count(s2) - 1;
		q = malloc(len * sizeof(char));
		p = q;
		copy(s2,q);
		q = p;
		return (q);
	}
	if (s2 == NULL)
	{
		len = count(s1) + count(s2) - 1;
	       	q = malloc(len * sizeof(char));
		p = q;
		copy(s1,q);
		return (q);
	}
	len = count(s1) + count(s2) - 1;
	q = malloc(len * sizeof(char));
	p = q;
	if (q == NULL)
	{
		return (NULL);
	}
	copy(s1,q);
	copy(s2,q);
	q = '\0';
	q = p;
	return (q);
}
