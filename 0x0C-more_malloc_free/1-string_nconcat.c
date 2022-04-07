#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int length(char *s)
{
	unsigned int len = 0;

	while(*s)
	{
		len++;
		s++;
	}
	return (len);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *start, *current;
	unsigned int lens1 = length(s1);
	unsigned int lens2 = length(s2);

	if(n > lens2)
	{
		n = lens2;
	}
	current = malloc( (lens1 + n) * sizeof(char));
	start = current;
	while(*s1)
	{
		*current = *s1;
		s1++;
		current++;
	}
	while(n > 0)
	{
		*current = *s2;
		s2++;
		current++;
		n--;
	} *current = '\0';
	current = start;
	return current;
}
