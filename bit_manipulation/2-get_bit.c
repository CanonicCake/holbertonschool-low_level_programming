#include "main.h"
#include <stdio.h>

/**
 * get_bit - grabs a bit
 * @n: number of bits to grab
 * @index: the index to grab the bits from
 *
 * Return: bit, and -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
	
}
