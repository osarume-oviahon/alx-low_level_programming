#include "main.h"

/**
 *_evaluate - evaluates a given number
 **_sqrt_recursion - returns the natural square root of a number
 *@n: variable
 *@a: variable
 *Return: 0
 */

int _evaluate(int a, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (a * a < n)
		return (_evaluate(a + 1, n));
	else if (a * a == n)
		return (a);
	return (-1);
}

int _sqrt_recursion(int n)
{
	int a = 0;

	if (a < 0)
		return (-1);
	else
		return (_evaluate(a, n));

}
