#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
    int x, j, sum = 0;
    for (x = 0; x < size; x++){
	    
            sum += *((a+x)+(x*size));

	}printf("%d, ", sum );
	sum = 0;

	for (x = 2; x >= 0; x--){

            sum += *(a + size * (x + 1) - (x + 1));


	}printf("%d\n", sum );

}
