#include "main.h"

/**
 * _puts_recursion - recurse a puts funtion while in a string
 * @s: points to the string that is recurring
 *
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
