#include "main.h"
/**
 * is_prime - write a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: input number
 * @b: interator
 *
 * Return: to 1 if it's a prime number
 * Return to 0 if otherwise
 */

int is_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
	{
		if (n == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, b + 1));
}

/**
 * is_prime_number - write a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: is a prime number
 *
 * Return: to 1 if it's a prime number
 * Return to 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
