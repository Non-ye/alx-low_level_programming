#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	putchar('\n');
	return (0);
}
