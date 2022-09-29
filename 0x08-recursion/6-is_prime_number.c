#include "main.h"

/**
 * is_prime_nummber - indicstes a prime number
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - calculates if number is prime
 * @n: number
 * #start: counter
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
