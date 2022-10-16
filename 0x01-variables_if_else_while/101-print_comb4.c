#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int e;
	int f;
	int g;

	for (e = 0; e < 8; e++)
	{
		for (f = e + 1; f < 9; f++)
		{
			for (g = f + 1; g < 10; g++)
			{
				if (e != f && e != g && f != g)
				{
					putchar(e + '0');
					putchar(f + '0');
					putchar(g + '0');
					if (e + f + g < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
