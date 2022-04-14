#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by the given separator
 * @separator: string to separate
 * @n: no of args
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		char *p = va_arg(list, char*);

		if (p)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
