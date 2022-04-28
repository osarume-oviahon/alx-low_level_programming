#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - returns the length of a string
 *@s: pointer
 *Return: 0
 */

int _strlen_recursion(char *s)
{
	char s[] = "Length of the string";
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	_putchar(s);
		return (0);

}
