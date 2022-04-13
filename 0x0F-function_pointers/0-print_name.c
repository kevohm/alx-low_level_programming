#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name using function as parameter
 * @name - name to print
 * @f - function as param
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		return;
	}
	f(name);
}
