#include "main.h"

/**
 * print_chessboard - a funtion that prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int d, b = 0;

	for (d = 0; d < 64; d++)
	{
		if (d % 8 == 0 && d != 0)
		{
			b = d;
			_putchar('\n');
		}
		_putchar(a[d / 8][d - b]);
	}
	_putchar('\n');
}
