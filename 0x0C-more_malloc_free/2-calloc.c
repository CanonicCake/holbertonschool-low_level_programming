#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - contagious allocation
 * @nmemb: number member
 * @size: size of bytes
 *
 * Return: Pointer to new memory, NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	if (ptr)
	{
		return (ptr);
	}
	return (NULL);
}
