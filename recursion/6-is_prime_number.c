#include "main.h"

/**
 * prime_number - will make a check on the prime number
 * @n: number to be checked
 * @i: intiger
 *
 * Return: The prime number
 */

int prime_number(int n, int i)
{
	if (n % i == 0 && i != (n / 2))
		return (0);
	else if (i >= (n / 2))
		return (1);
	return (prime_number(n, i + 1));
}

/**
 * is_prime_number - prints the prime number
 * @n: prime number
 *
 * Return: 0 if not a prime number, 1 if a prime number
 */

int is_prime_number(int n)
{

	if (n > 1)
		return (prime_number(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}
