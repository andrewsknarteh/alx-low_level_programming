#include "main.h"

/**
 * is_palindrome - prints if a string is pallindrome
 * @n: integer to be checked
 *
 * Retrun: 1 if n is pallindrome, 0 otherwise
 */
int is_palindrome(char *s);
{
	int flsg = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if a string is a pallindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a pallindrome
 *
 * Return: void
 */
void check(char *s, int start, int end, int *flag);
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s);
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
