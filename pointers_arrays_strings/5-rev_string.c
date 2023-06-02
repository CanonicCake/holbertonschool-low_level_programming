#include "main.h"

/**
 * rev_string - reverse string
 * @s: points to s
 *
 * Return: void
 */

void rev_string(char *s)
{

	int c, len = 0;
	char rev;

	a = s;

	while (s[len] != '\0')
	{
		len++;
	}
	
	len--;

	for (c = 0; c < len; c++)
	{
		rev = s[len];
		s[len] = s[c];
		s[c] = rev;
		len--;
	}
}
