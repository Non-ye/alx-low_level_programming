#include "main.h"

/**
 * more_numbers - Entry
 * Return: to Nothing
 */

void more_numbers(void)
{
	int w, x, y, z;

	for (w = 0; w <= 9; w++)
	{
		for (x = 48; x <= 14 % 10; x++)
		{
			y = 1;
			z = 4;
			{
				_putchar(y);
			}
			_putchar(z);
		}
		_putchar('\n');
	}
}
