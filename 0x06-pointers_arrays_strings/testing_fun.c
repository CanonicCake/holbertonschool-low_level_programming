#include <stdio.h>
#include <stdlib.h>

void do_one_pushup(int n);

/**
 * main -entry point
 * do_one_pushup - does a pushup
 * @n: variable
 *
 * Return: do_one_pushup on success
 */

int main(void)
{
	do_one_pushup(1);
	return(0);
}

void do_one_pushup(int n)
{

	printf("Do %d pushups\n", n);
	do_one_pushup(++n);
}
