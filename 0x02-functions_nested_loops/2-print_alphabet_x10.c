#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int k = 0;
	char l;

	for (k = 0; k < 9; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	}
	_putchar('\n');
}

