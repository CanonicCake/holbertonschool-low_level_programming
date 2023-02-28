#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concentrates two seperate strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Null if passed through and empty string and failure,
 * string con on success.
 */

char *str_concat(char *s1, char *s2)
{

	int s1len = 0;
	int s2len = 0;
	int i;
	char *a;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (s1 != NULL)
	{
		while (s1[s1len] != '\0')
			s1len++;
	}
	if (s2 != NULL)
	{
		while (s2[s2len] != '\0')
			s2len++;
		s2len++;
	}
	a = malloc((s1len + s2len) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	for(i = 0; i < s1len; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < s2len; i++)
	{
		a[s1len + i] = s2[i];
	}
	return (a);
}
