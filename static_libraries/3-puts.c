#include "main.h"

/**
 * _puts -acts as a print
 * @str: points to string
 *
 * Return: void Always
 */

void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
