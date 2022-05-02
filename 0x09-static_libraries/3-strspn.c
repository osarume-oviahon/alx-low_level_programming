#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string containing list of characters
 * Return: number of bytes of s
 **/

unsigned int _strspn(char *s, char *accept)

{
	int var1, var2;
	int n = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	var1 = 0;
	while (str1[var1] != '\0')
	{
		var2 = 0;
		while (str2[var2] != '\0')
		{
			if (str2[var2] == str1[var1])
			{
				n++;
				break;
			}

			var2++;
		}

		if (s[var1] != accept[var2])
		{
			break;
		}

		var1++;
	}

	return (n);
}
