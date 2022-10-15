#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int b;

	for (b = 0; b < 100; b++)
	{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
