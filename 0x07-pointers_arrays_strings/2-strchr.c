#include "main.h"
/**
 * _strchr - a function that locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int b = 0;

	for (; *(s + b) != '\0'; b++)
		if (*(s + b) == c)
			return (s + b);
	if (*(s + b) == c)
		return (s + b);
	return ('\0');
}
