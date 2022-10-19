#include "main.h"
/**
 * _isalpha - Entry
 * @c: char type letter
 * Return: 1 if lowercase or uppercase true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

