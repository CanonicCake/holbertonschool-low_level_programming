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

	char ch = 'a';
	char CH = 'A';

	while (ch != 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH != 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
return (0);
}
