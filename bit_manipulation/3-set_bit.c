#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets a bits index to 1
 * @n: number variable
 * @index: index to pull from
 *
 * Return: 1 on success, -1 on fail
 */

int set_bit(unsigned long int *n, unsigned long int index)
{
	unsigned int i = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	i <<= index;
	*n |= i;
	return (1);
}
