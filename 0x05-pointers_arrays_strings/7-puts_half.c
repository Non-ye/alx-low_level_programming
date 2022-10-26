#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: char type string.
 * Return: 0.
 */
void puts_half(char *str)
{
	int b = 0, g;

	while (b >= 0)
	{
		if (str[b] == '\0')
			break;
		b++;
	}

	if (b % 2 == 1)
		g = b / 2;
	else
		g = (b - 1) / 2;

	for (g++; g < b; g++)
		_putchar(str[g]);
	_putchar('\n');
}
