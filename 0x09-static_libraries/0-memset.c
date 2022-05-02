#include "main.h"
#include <stdio.h>

/**
 *_memset -   fills memory with a constant byte
 *@s: hold the address of variable n
 *@b: constant byte
 *@n: bytes of the memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int bytes;

	for (bytes = 0; bytes < n; bytes++)
	{
		*(s + bytes) = b;

	}

	return (s);
}
