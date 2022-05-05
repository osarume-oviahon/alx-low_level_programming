#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - length of array
 *@s: array of elements
 *Return: integer
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
 *str_concat - concatenates all input strings into a single string
 *@s1: Array one
 *@s2: Array two
 *Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int integer1, integer2, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	array = (char *) malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}

	for (integer1 = 0; *(s1 + integer1) != '\0'; integer1++)
		*(array + integer1) = *(s1 + integer1);

	for (integer2 = 0; *(s2 + integer2) != '\0'; integer2++)
	{
		*(array + integer1) = *(s2 + integer2);
		integer1++;
	}

	return (array);
}
