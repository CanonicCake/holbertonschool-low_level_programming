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
	fprintf(stderr, "Size of char: %zu byte(s)\n", sizeof(char));
	fprintf(stderr, "Size of an int: %zu byte(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %zu byte(s)\n", sizeof(long int));
	fprintf(stderr, "Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
