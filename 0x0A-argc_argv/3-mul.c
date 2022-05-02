#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int integer1, integer2;
if (argc == 3)
{
integer1 = atoi(argv[1]);
integer2 = atoi(argv[2]);
printf("%d\n", integer1 *integer2);
return (0);
}
printf("Error\n");
return (1);
}
