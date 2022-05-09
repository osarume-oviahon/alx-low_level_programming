#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int string1 = 0, string2 = 0, integer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[string1] != '\0')
	{
		string1++;
	}

	while (s2[string2] != '\0')
	{
		string2++;
	}

	if (n > string2)
	n = string2;
	pointer = malloc((string1 + n + 1) * sizeof(char));

	if (pointer == NULL)
		return (0);

	for (integer = 0; integer < string1; integer++)
	{
		pointer[integer] = s1[integer];
	}

	for (integer < (string1 + n); integer++)
	{
		pointer[integer] = s2[integer - string1];
	}
	pointer[integer] = '\0';

return (pointer);
}
