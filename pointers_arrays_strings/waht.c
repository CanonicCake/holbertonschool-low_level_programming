#include "main.h"

/**
 * _memset - Fills n bytes of memory area and will
 * point to consistant memory by @s and @b
 * @s: points to s
 * @b: bytes
 * @n: number of bytes available
 *
 * Retrun: s
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
