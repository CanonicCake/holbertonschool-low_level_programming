#include "main.h"

/**
 * swap_int - changes variables under int
 * @a: points to a
 * @b: points to b
 *
 * Return: void Always
 */

void swap_int(int *a, int *b)
{
	int swap;

	(swap = *a);
	(*a = *b);
	(*b = swap);
}
