#include "main.h"

/**
 * _strlen_recursion - prints the length of the string in a recursive
 * pattern
 * @s: string length
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{

	int l;

	l = 0;
	if (*s != '\0')
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}
