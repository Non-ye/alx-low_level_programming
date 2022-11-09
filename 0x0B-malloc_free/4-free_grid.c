#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  free up a 2d array grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
