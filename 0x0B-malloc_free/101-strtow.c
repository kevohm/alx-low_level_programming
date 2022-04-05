#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 *
 *
 *
 */
char **strtow(char *str)
{
	int len = 0, i, a;
	char *q = str;
	char **p;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (*str)
	{
		if (*str > 32)
		{
		}else
		{
			if ((*(str + 1) > 32))
			{
				len++;
			}
		}

		str++;
	} str = q;
	p = malloc(sizeof(char*) * len);
	i = 0, a = 0;

	while(*str)
	{
		if(*str > 32)
		{
			a++;
			if(i > len)
			{
				break;
			}
			if ( !(*(str + 1) > 32))
			{
				a++;
				p[i] = malloc(sizeof(char) * a);
				a = 0;	
				i++;
				str++;
			}
		}
		str++;
	} str = q;
	i = 0;
	while(*str)
	{
		if (*str > 32)
		{
			if(i > len)
			{
				break;
			}
			*(p[i]) = *str;
			p[i]++;
			if (!(*(str + 1) > 32))
			{
				*(p[i]) = '\0';
				i++;
			}
		}
		str++;
	}
	return (p);
}
