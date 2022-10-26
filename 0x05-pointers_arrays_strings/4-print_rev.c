#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: char typr string
 * Return: to 0
 */

void print_rev(char *s)
{
	int b = 0;

	while (b >= 0)
	{
		if (s[b] == '\0')
			break;
		b++;
	}

	for (b--; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
