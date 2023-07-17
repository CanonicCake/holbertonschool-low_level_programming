#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_unit - converts binary to a unit
 * @b: address
 *
 * Reurn: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int base = 1, result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len])
	{
		len++;
	}

	while (len)
	{
		if (b[len - 1] != '0' && b[len -1] != '1')
		{
			return (0);
		}
		if (b[len - 1] == '1')
		{
			result += base;
		}
		base *= 2;
		len--;
	}
	return (result);
}
