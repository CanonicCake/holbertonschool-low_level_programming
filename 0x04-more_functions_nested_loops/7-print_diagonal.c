#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: variables
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int c;
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
