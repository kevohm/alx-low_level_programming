#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2_dimensional grid 
 * @grid: 2_dimensional grid
 * @height: size of array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < heigth; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
