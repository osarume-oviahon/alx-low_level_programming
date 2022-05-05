#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: Null
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int integer1, integer2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (integer1 = 0; integer1 < height; integer1++)
	{
		grid[integer1] = malloc(sizeof(int) * width);

		if (grid[integer1] == NULL)
		{
			for (integer1 = integer1 - 1; integer1 >= 0; integer1--)
			{
				free(grid[integer1]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (integer1 = 0; integer2 < width; integer2++)
		grid[integer1][integer2] = 0;

	return (grid);
}
