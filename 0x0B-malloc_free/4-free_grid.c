#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a space previously allocated
 * @grid: allocated space
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int integer;

	for (integer = 0; integer < height; integer++)
	{
		free(grid[integer]);
	}

	free(grid);
}
