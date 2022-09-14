#include "main.h"

/**
 * print_sign - function to check sign of a number based on condition
 * @n: checker for the argument of the function
 * Return: 1, -1 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
