#include "main.h"

/**
 * _isupper - will return c
 * @c: Variable
 *
 * Return: 1 if C, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
