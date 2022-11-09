#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 * @str: input string to duplicate
 * Return: NULL if str == NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		c++;
	duplicate = malloc(sizeof(char) * (c + 1));
	if (duplicate == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		duplicate[b] = str[b];
	duplicate[c] = '\0';
	return (duplicate);
}
