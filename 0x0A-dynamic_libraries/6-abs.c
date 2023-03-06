#include "main.h"

/**
 * _abs - entry point
 *
 * @n: variable
 * Return: 0 Always (success)
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
