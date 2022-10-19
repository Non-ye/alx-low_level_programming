#include "main.h"
/**
 * print_sign - Entry
 * @n: char type integer
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	else if (n == 0)
		_putchar('0');
	else
		_putchar('-');
	_putchar('\n');
}
