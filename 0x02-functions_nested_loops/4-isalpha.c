#include "main.h"

/**
 * _isalpha - function to chech if c is letter, lowercase or uppercase
 * @c: is the chcker for the argument of the function
 * Return: 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
