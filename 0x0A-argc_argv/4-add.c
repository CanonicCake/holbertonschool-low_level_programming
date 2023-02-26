#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - entry to check code
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 when two pass, 1 otherwise
 */

int main(int argc, char *argv[])
{

	int add;
	int sum;
	int numb;

	add = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (add < argc)
	{
		for (numb = 0; argv[add][numb] != '\0'; numb++)
		{
			if (!(isdigit(argv[add][numb])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[add]);
		add++;
	}
	printf("%d\n", sum);
	return (0);
}
