#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	char c;
	int i;
	long int l;
	long long int e;
	float f;

	printf("Size of char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(e));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
	return (0);
}
