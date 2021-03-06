#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked - provides a quick workaround for debugging
 *@b: allocated memory space
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
