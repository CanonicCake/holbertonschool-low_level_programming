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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
	}
	putchar('\n');
return (0);
}
