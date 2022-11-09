#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional a
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a = 0, b;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; a < height; a++)
		{
			array[a] = (int *) malloc(sizeof(int) * width);
			if (array[a] != NULL)
			{
				for (b = 0; b < width; b++)
					array[a][b] = 0;
			}
			else
			{
				while (a >= 0)
				{
					free(array[a]);
					a--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
