#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random number n
 * Description: dtermines n is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n%10;
	if (last > 5)
	printf("Last digit of %i is %d and is greater than 5\n", n);
	else if (n == 0)
	printf("Last digit of %i is %d and is 0\n", n, last);
	else
	printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
