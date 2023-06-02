#include "main.h"

/**
 * print_numbers - will print from 0 to 9
 *
 * Return: void Always
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
