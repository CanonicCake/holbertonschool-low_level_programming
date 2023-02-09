#include "main.h"

/**
 * print_most_numbers -will print everything except 2 and 4
 *
 * Return: void Always
 */

void print_most_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
