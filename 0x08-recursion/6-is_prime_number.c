#include "main.h"

/**
 * is_prime_number - prints if an integer is a prime number
 * @n: integer to be used
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n);
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if n is prime
 * @n: number to checked
 * @start: number to start checking from
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int start);
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
