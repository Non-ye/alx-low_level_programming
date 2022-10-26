#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int b = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + b) != '\0')
	{
		if (size > 0 && (*(s + b) < '0' || *(s + b) > '9'))
			break;

		if (*(s + b) == '-')
			pn *= -1;

		if ((*(s + b) >= '0') && (*(s + b) <= '9'))
		{
			if (size > 0)
				m *= 0;
			size++;
		}
		b++;
	}

	for (i = b - size; i < b; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
