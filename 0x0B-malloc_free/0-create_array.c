#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char.
 * @size: array size
 * @c: char to initialize array with
 * Return: array @a
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int b;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		array[b] = c;
	return (array);
}
