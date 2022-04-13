#include "function_pointers.h"
#include "stdio.h"
/**
 * print_name - prints name using function as parameter
 * @name - name to print
 * @f - function as params
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
