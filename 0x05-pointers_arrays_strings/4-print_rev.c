#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: points to s
 *
 * Return: void Always
 */

void print_rev(char *s)
{
	int len = 0;
	int rev;

	while (s[len])
		len++;
	len--;

	for (rev = len; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
	
}
