#include "main.h"

/**
 * _isupper - check the code
 * @c: The character to print
 * Return: to 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c == 'A')
	{
		_isupper(c);
		return (1);
	}
	else
	{
		_isupper(c);
		return (0);
	}
	_putchar('\n');
}
