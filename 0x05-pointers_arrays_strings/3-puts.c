#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: to 0
 */

void _puts(char *str)
{
	int b = 0;

	while (b >= 0)
	{
		if (str[b] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[b]);
		b++;
	}
}
