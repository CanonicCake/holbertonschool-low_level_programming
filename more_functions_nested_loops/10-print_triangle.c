#include "main.h"

/**
 * print_triangle - prints in a square
 * @size: outputs the size
 *
 * Return: void Always
 */

void print_triangle(int size)
{
	int l, w, t;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = size - l; w > 1; w--)
			{
				_putchar(' ');
			}
			for (t = 0; t <= l; t++)
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
