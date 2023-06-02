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

	if (n > 0)
	{
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
	else
	{
		_putchar('\n');
	}
}
