#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Characters in a string
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}

	return (0);
}
