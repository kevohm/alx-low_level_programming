#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a new string which is a duplicate of the string str
 * @str: string
 * Return: char *
 *
 */
char *_strdup(char *str)
{	
	char *p,*s = str;
	int len;

	while(*s)
	{
		len++;
		s++;
	}s = str;
	p = malloc(sizeof(char) * len);
	while(*str)
	{
		*p = *str;
		str++;
		p++;
	}p = s;
	return (p);
}
