#include "main.h"
#include <stdio.h>

/**
 * clear_bit - will clear a bit
 * @n: number of bits
 * @index: will be an index
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if(index > sizeof(long) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
