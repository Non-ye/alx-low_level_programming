#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: char type integer
 * @b: char type integer
 * Return: to Nothing
 */

void swap_int(int *a, int *b)
{
	int f = *a;

	*a = *b;
	*b = f;
}
