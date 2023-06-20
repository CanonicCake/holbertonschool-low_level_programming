#include "main.h"

/**
 * _isalpha - entry, checks alphabet
 * @c: variable
 *
 * Return: 1 if c; 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
