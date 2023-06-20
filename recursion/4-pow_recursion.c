#include "main.h"

/**
 * _pow_recursion - recurse the power of x to the power of y
 * @x: longitude
 * @y: latitude
 *
 * Return: The outcome of x and y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
