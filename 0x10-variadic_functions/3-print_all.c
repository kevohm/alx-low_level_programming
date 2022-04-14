#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	int len = strlen(format);
	va_list list;

	va_start(list, format);
	while (i < len)
	{
		if (format[i] == 's' && va_arg(list, char*))
		{
			printf("%s", va_arg(list, char*));
		}
		else if (format[i] == 'c')
		{
			printf("%c", va_arg(list, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(list, double));
		}
		else if (format[i] == 'i')
		{
		printf("%i", va_arg(list, int));
		}
		if (i != (len - 1))
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
