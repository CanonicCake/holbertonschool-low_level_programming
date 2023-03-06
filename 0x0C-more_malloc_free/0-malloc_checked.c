#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - will check allocation
 * @b: memory variable
 *
 * Return: pointer to address
 */

void *malloc_checked(unsigned int b)
{

	void *ad;

	ad = malloc(b);
	if (ad == NULL)
		exit(98);
	return (ad);
}
