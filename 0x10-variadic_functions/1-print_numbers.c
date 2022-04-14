#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator && i != (n - 1))
		{
		printf("%s ", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}