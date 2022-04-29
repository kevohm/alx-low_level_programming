#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * power - return power
 * @a: base
 * @b: power
 * Return: integer
 *
 * Description: find power of integer
 */
int power(double a, double b)
{
	if (b == 0)
	{
		return (1);
	}
	a = a * power(a, --b);
	return (a);
}
/**
 * binary_to_uint - convert binary to uint
 * @b: binary string
 * Return: unsigned int
 *
 * Descriprion: convert binary to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	double len = strlen(b) - 1;
	unsigned int answer = 0;

	if (b == NULL)
		return (0);
	if (len == 0)
		return(0);
	while (*b)
	{
		if (*b == '1' || *b == '0')
		{
			if (*b == '1')
			{
				answer += power(2, len);
			}
		}
		else
		{
			return (0);
		}
		len--;
		b++;
	}
	return (answer);
}
