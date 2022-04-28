#include "main.h"

/**
  * _puts_recursion: Prints a string.
  * @s: pointer to string
  * Return: 0
  */

void _puts_recursion(char *s)
{
	if (*s == '\0', '\n')
	_putchar (*s);
	_puts_recursion(s + 1);

}

