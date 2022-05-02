#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: A pointer to the value of a character that will be changed
 *@src: A pointer to the value of a character that will be reassigned
 *@n: value of bytes from src
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	a = 0;
		while (dest[a] != '\0')
		{
			a++;
		}

		b = 0;
		while (b < n && src[b] != '\0')
		{
			dest[a] = src[b];
			b++;
			a++;
		}

		dest[a] = '\0';

		return (dest);
}
