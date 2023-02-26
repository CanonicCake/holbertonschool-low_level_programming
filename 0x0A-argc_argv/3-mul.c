#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point to check code
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 if true, 1 if not given two ints
 */

int main(int argc, char *argv[])
{

	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
}
