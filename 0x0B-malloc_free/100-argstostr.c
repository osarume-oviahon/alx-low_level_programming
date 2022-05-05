#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument 1
 * @av: argument 2
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int count = 0, arg1 = 0, arg2 = 0, arg3 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (arg1 < ac)
	{
		arg2 = 0;
		while (av[arg1][arg2] != '\0')
		{
			count++;
			arg2++;
		}
		arg1++;
	}
	count = count + ac + 1;
	array = malloc(sizeof(char) * count);
	if (array == NULL)
	{
		return (NULL);
	}
	for (arg1 = 0; arg1 < ac; arg1++)
	{
		for (arg2 = 0; av[arg1][arg2] != '\0'; arg2++)
		{
			array[arg3] = av[arg1][arg2];
			arg3++;
		}
		array[arg3] = '\n';
		arg3++;
	}
	return (array);
}
