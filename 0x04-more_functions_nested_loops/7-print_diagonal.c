#include "main.h"

/**
 * print_diagonal - prints \
 * @n: variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	char c;
	int i;

	while (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 1; c <= n; c++)
	{
		for (i = 1; i <= c; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
