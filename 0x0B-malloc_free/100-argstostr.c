#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count - return size of array
 * @a: array
 * Return: size of array
 */
int count(char *a)
{
	int len;

	while (*a)
	{
		len++;
		a++;
	}
	return (len);
}
/**
 * argstostr - return string of given args
 * @ac: number of arguements
 * @av: array of arguements
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i, sum = 0;
	char *q;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (i == (ac - 1))
		{
			sum += count(av[i]);
			sum--;
		}else
		{
		sum += count(av[i]);
		}
	}
	q = malloc(sizeof(char) * 10);
	p = q;
	for (i = 0; i < ac; i++)
	{
		while (*(av[i]))
		{
			*q = *(av[i]); 
			(av[i])++;
			q++;
		}
		if (ac == (i+1))
		{
			*q = '\n';
			break;
		}
		if (*(av[i]) =='\0')
		{
			*q = '\n';
			q++;
		}
	}q = p;
	return (q);
}
