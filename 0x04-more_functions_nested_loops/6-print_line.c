#include "main.h"

/**
 * print_line - will print a line
 * @n: variable
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
