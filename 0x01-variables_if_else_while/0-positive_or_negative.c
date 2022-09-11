#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Prints if an output is positive, zero or negative
 *
 * Return: Always (Success)
 */
int mani(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n==0)
	{
		printf("%d is zero\n", n)'
	}
	return (0);
}
