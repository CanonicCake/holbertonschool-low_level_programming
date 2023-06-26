#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - points to a created array
 * @c: character to value
 * @size: size of array
 * Return: value of the charactrer
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *s;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
