#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int h;
	int i;

	for (h = 0; h < 99; h++)
	{
		for (i = h + 1; i < 99; i++)
		{
			if (h != i && i != h)
			{
				putchar((h / 10) + '0');
				putchar((h % 10) + '0');
				putchar(' ');
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (h + i > 0)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}