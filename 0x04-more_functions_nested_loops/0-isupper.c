#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: tested character
 * Return: to 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c < 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
