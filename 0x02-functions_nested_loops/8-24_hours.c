#include "main.h"

/**
  * jack_bauer - prints every minute of the day
  *
  * Return: Always 0.
  */

void jack_bauer(void);
{
int a, b;

	for (a = 0; <= 23; a++)
	{
	for (b = 0; <= 59; b++)
	{
		_putchar (a / 10 + '0');
		_putchar (a % 10 + '0');
		_putchar (':');
		_putchar (b / 10 + '0');
		_putchar (b % 10 + '0');
		_putchar ('\n');
		return (0);

	}


	}

}
