#include "main.h"

/**
 * factorial - to multiply all whole numbers to 1
 * @n: number of whole numbers
 *
 * Return: Value of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (n);
	}
}
