#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Check for digigt
 * @c: character to check
 * Return: to 1 if is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int f = isdigit(c);

	if (f == 0)
		return (f);
	else
		return (1);
}
