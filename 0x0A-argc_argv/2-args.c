#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Pointer that holds the array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;
	while (argc > 0)
	{
		if (count < argc)
		{
			printf("%s\n", argv[count]);
		}
		count++;
	}

	return (0);
}
