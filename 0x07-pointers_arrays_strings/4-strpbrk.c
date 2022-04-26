#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes in the string accept
 * @s: string to be searched
 * @accept: string to be located
 *Return: *s or null
 **/

char *_strpbrk(char *s, char *accept)
{
	int bytes;

	while (*s != '\0')
	{
		bytes = 0;
		while (accept[bytes] != '\0')
		{
			if (*s == accept[bytes])
			{
				return (s);
			}

			bytes++;
		}

		s++;
	}
	return (0);

}
