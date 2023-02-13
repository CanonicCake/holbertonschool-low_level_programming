#include "main.h"

/**
 * _memset - sets up memory allocation
 * @s: points to s
 * @b: variable b
 * @n: unsigned n
 *
 * Retrun: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
