#include <stdio.h>
#include "main.h"

/**
 * main - entry point to code
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
