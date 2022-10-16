#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int b, c;

	b = 48;
	c = 48;

	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (c != b && c < b)
			{
				putchar(c);
				putchar(b);
				if (b == 57 && c == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
