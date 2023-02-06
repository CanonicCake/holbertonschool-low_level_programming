#include "main.h"

/**
 * times_table - will print the times table
 *
 * Return: void Always
 */

void times_table(void)
{
	int r = 0, c = 0, multi;

	while (r <= 9)
	{
		_putchar('0');
		r++;
		for (c = 1; c <= 9; c++)
		{
			multi = r * c;
			if (multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi % 10 + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar(10);
	}
}
