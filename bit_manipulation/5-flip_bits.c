#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips a bit
 * @n: variable
 * @m: variable
 *
 * Return: an amount of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int i = 0;

	t = n ^ m;
	while (t >= 1)
	{
		if ((t & 1) == 1)
		{
			i++;
		}
		t >>= 1;
	}
	return (i);
}
