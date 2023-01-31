#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)

{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

	printf("Size of char: %i byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %i byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %i byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of a long long int: %i byte(s)\n", (unsigned long) sizeof(o));
	printf("Size of a float: %i byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
