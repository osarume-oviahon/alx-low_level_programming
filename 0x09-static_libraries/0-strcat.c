#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to the value of a character that will be changed
 *@src: A pointer to the value of a character that will be reassigned
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
