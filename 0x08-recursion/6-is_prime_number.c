#include "main.h"
#include <stdio.h>

/**
 *evaluate_num - recursion loop
 *@num: num
 *@iterator: number to iterate
 *Return: return 1 or 0
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
		return (1);
	else if (num % iterator == 0)
		return (0);
	if (num % iterator != 0)
		return (evaluate_num(num, iterator + 1));

}

/**
 *is_prime_number - returns 1 if the input integer is a prime number,
 *@num: number
 *Return: 1 or 0
 */

int is_prime_number(int num)
{
	int iterator;
	iterator = 2
		if (num < 2)
			return (0);
	if (num == 2)
		return (1);
	return (evaluate_num(num, iterator));
}
