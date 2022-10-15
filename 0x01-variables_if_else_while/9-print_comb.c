#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		putchar(c + '0');
		if (c < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
