#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: is int that will use for the argument of the fuction
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
