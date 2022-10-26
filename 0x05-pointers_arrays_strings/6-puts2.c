#include "main.h"

/**
 * puts2 - function that prints every other character of a string.
 * @str: char type string.
 * Return: always 0
 */
void puts2(char *str)
{
	int b = 0;

	while (b >= 0)
	{
		if (str[b] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (b % 2 == 0)
			_putchar(str[b]);
		b++;
	}
}
