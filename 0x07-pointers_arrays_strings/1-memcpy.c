#include "main.h"
#include <stdio.h>

/**
 *_memcpy -   copies memory area
 *@dest: memory area to be copied to
 *@src: memory area to be copied from
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int bytes;

	for (bytes = 0; bytes < n; bytes++)
	{
		*(dest + bytes) = *(src + bytes);

	}

	return (dest);
}
