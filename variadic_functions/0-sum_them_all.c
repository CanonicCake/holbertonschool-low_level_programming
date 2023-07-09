#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - will add them all together
 * @n: number
 * @...: other variable
 *
 * Return: result of equations
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	i = sum = 0;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
