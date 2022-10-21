#include "main.h"

/**
 * print_most_numbers - Entry
 * Return: to Nothing
 */

void print_most_numbers(void)
{
	char g = 48;

	while (g <= 57)
	{
		if ((g != 50 && g != 52) && g <= 57)
			_putchar(g);
		g++;
	}
	_putchar('\n');
}
