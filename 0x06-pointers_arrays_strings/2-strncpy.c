#include "holberton.h"

/**
 * _strncpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * @n: variable for both
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (src[l])
		l++;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
