#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int k, l;

	for (k = 0; k <= 9; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

