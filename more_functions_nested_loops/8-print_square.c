#include "main.h"

/**
 * print_square - prints in a square
 * @size: outputs the size
 *
 * Return: void Always
 */

void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
