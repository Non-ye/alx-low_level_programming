#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i = 0;
	char j;

	while (i <= 9)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	}
	_putchar('\n');
	j++;
}

