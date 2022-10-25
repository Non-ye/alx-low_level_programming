#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: char string
 * Return: to 0
 */

int _strlen(char *s)
{
	int b;

	b = 0;
	while (s[b])
	b++;
	return (b);
}

