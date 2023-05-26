#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{

	int i = '0';
	int a = 97;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
