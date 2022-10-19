#include "main.h"
/**
 * print_times_table - Prints the n times_table
 * @n: number time table (0 < n <= 15)
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putchar(',');
				_putchar(' ');
				if (op <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(op + '0');
				}
				else if (op <= 'c')
				{
					_putchar(' ');
					_putchar((op / 10) + '0');
					_putchar((op % 10) + '0');
				}
				else
				{
					_putchar(((op / 100) % 10) + '0');
					_putchar(((op / 10) % 10) + '0');
					_putchar((op % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
