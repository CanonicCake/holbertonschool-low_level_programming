#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void Always (success)
 */

void print_alphabet(void)
{

	char a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
