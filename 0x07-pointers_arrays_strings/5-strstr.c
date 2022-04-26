#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string 
 * @needle: a substring in the string haystack
 * Return: *needle or null
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *mainstring, *substring;

	while (*haystack != '\0')
	{
		mainstring = haystack;
		substring = needle;

		
		while (*haystack != '\0' && *substring != '\0' && *haystack == *substring)
		{
			haystack++;
			substring++;
		}
		if (*substring == '\0')
			return (mainstring);
		haystack = mainstring + 1;
	}
	return (0);
}
