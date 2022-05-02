#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: A pointer to the value of a character that will be changed
 *@src: A pointer to the value of a character that will be reassigned
 *@n: value in bytes
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);

}
