#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - calculates the length of an array
 *@s: array of elements
 *Return: 1
 */

int _strlen(char *s)
{
	unsigned int integer;

	integer = 0;
	while (s[integer] != '\0')
	{
		integer++;
	}

	return (integer);
}

/**
 *_strcpy - copies the array pointed to into destination
 *@src: array of elements
 *@dest: pointer to the desyination where the content is to be copied
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int integer = 0;

	while (src[integer] != '\0')
	{
		dest[integer] = src[integer];
		integer++;
	}
	dest[integer] = '\0';

	return (dest);
}

/**
 *_strdup - duplicates a given array
 *@str: array of elements
 *Return: pointer
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	array = (char *) malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}
	_strcpy(array, str);

	return (array);
}
