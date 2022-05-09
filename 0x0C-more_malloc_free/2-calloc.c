#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc -allocates memory for an array
 *@nmemb: number of element in the array
 *@size: allocated space for each position in array
 *Return: pointer null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int integer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (integer = 0; integer < nmemb * size; integer++)
		pointer[integer] = 0;

	return (pointer);

}
