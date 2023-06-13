#include "holberton.h"

/**
 * _strncat - strings a cat
 * @dest: dest variable
 * @src: source varable
 * @n: variable
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int ch = 0;

	while (dest[i])
	{
		i++;
	}
	while (ch < n && src[ch])
	{
		dest[i] = src[ch];
		ch++;
		i++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
