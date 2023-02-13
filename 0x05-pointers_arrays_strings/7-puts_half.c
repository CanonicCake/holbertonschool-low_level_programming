#include "main.h"

/**
 * puts_half - will print the latter half
 * @str: string standard
 *
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
	int ch;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		ch = (i - 1) / 2;
		ch += 1;
	}
	else
	{
		ch = i / 2;
	}
	for (; ch < i; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
