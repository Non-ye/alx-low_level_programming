#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Return 0 on success, Return 1 on failure
 */

int main(int argc, char *argv[])
{
	int a, b, total = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[a]);
	}

	printf("%d\n", total);

	return (0);
}
