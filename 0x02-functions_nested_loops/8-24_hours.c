#include "main.h"
/**
 * jack_bauer - Entry
 * Return: No return
 */
void jack_bauer(void)
{
	int e, f, g, h;

	for (e = '0'; e <= '2'; e++)
	{
		for (f = '0'; f <= '9'; f++)
		{
			for (g = '0'; g <= '5'; g++)
			{
				for (h = '0'; h <= '9'; h++)
				{
					if (e >= '2' && f >= '4')
						break;
					_putchar(e);
					_putchar(f);
					_putchar(':');
					_putchar(g);
					_putchar(h);
					_putchar('\n');
				}
			}
		}
	}
}
