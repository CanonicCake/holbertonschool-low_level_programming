#include "main.h"

/**
 * sqrt_check - finds the square root first
 * @a: variabe to multiply
 * @n: number to increase
 *
 * Return: square root
 */

int sqrt_check(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a >= n / 2)
		return (-1);
	return (sqrt_check(n, a + 1));
}

/**
 * _sqrt_recursion - will recurse the square root of n
 * @n: root to square
 *
 * Return: Value of square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_check(n, 1));
}
