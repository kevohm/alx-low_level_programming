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
	int **p, i, j;
	if(width < 0 || height < 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	for(i = 0;i<height;i++)
	{
		for(j = 0; j<width;j++)
		{
			p[i][j] = 0;
		}
	}
	return p;
}
