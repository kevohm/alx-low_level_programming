#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string duplicating(str)
 * @str: string
 * Return: char *
 *
 */
char *_strdup(char *str)
{
	char *p, *s = str;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		len++;
		s++;
	}
	p = (char *)malloc(sizeof(char) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	s = p;
	while (*str)
	{
		*p = *str;
		str++;
		p++;
	}
	p = s;
	return (p);
}
