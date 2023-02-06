#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry to print 98
 * @n: variable
 *
 * Return: void Always
 */

void print_to_98(int n)
{

	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
