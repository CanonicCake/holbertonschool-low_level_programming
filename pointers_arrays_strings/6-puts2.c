#include "main.h"

/**
 * puts2 - puts part 2
 * @str: variable string
 *
 * Return: void
 */

void puts2(char *str)
{

	int i = 0, ch;

	while (str[i] != '\0')
	{
		i++;
	}
	for (ch = 0; ch < i; ch += 2)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
