#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: char type string.
 * Return: always 0.
 */
void rev_string(char *s)
{
	int b = 0, c, d;
	char *str, temp;

	while (b >= 0)
	{
		if (s[b] == '\0')
			break;
		b++;
	}
	str = s;

	for (c = 0; c < (b - 1); c++)
	{
		for (d = c + 1; d > 0; d--)
		{
			temp = *(str + d);
			*(str + d) = *(str + (d - 1));
			*(str + (d - 1)) = temp;
		}
	}
}
