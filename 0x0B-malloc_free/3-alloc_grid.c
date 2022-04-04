#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate and return mulltidimentional array
 * @width: size of array in the array
 * @height: size of array
 */
int **alloc_grid(int width, int height)
{
	int** q = malloc(sizeof(int *) * height);
	int i, j;

	if(width < 0 || height < 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		q[i] = (int *)malloc(sizeof(int) * width);
	}
	for(i = 0;i < height;i++)
	{
		for(j = 0; j < width;j++)
		{
			q[i][j] = 0;
		}
	}
	return (q);
}
