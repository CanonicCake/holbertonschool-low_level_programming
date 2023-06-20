#include "main.h"

/**
 * _strlen - string length
 * @s: points to s
 *
 * Return: l
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != 0)
	{
		l++;
	}
	return (l);
}
