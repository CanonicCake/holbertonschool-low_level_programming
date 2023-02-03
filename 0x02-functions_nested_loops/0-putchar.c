#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char *s = "_putchar";
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
