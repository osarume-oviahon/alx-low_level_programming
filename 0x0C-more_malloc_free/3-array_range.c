#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: Null
 */

int *array_range(int min, int max)
{
	int *minmax, integer = 0, range = min;

	if (min > max)
		return (0);
	minmax = malloc((max - min + 1) * sizeof(int));

	if (!minmax)
		return (0);
	while (integer <= max - min)
		minmax[integer++] = range++;
	return (minmax);
}
