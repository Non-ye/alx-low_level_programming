#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: char type array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int g = 0;

	for (g = 0; g < n; g++)
	{
		printf("%d", *(a + g));
		if (g != (n - 1))
			printf(", ");
	}
	printf("\n");
}
