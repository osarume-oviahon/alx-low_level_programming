#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: 0
 */

void print_diagsums(int *a, int size)
{
	int var;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	var = 0;
	while (var < size)
	{
		sum1 = sum1 + *(a + var * size + var);
		sum2 = sum2 + *(a + var * size + size - var - 1);

		var++;
	}

	printf("%i, %i\n", sum1, sum2);

}
