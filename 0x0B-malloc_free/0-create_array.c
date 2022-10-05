#include "main.h"

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: character to insert
 *
 * Return: Null or array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int idex;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[idex] = c;

	return (array);
}
