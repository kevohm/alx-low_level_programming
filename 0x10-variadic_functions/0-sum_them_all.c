#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum up all args
 * @n: number of args
 * @...: args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	va_start (list, n);
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		sum += va_arg (list, int);
		i++;
	}
	va_end (list);
	return (sum);
}
