#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the sum of the two diagonals of a square matrix
 * @a: 2d array of chars
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
	int arr1, arr2;

	arr1 = 0;
	while (arr1 < 8)
	{
		arr2 = 0;
		while (arr2 < 8)
		{
			_putchar (a[arr1][arr2]);
			arr2++;
		}
		_putchar ('\n');
		arr1++;
	}

}
