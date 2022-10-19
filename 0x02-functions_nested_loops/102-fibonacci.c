#include <stdio.h>
#include "main.h"
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: to 0
 */
int main(void)
{
	int e;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (e = 0; e < 48; e++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	print("\n");
	return (0);
}
