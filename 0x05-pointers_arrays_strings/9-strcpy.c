#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (b >= 0)
	{
		*(dest + b) = *(src + b);
		if (*(src + b) == '\0')
			break;
		b++;
	}
	return (dest);
}
