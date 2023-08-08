#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 the dimensional grid from alloc_grid.c
 * @grid: pointer to grid of int type
 * @height: numer of rows
 * Return
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (h = 0; h < height;  h++)
	{
		free(grid[h]);
	}
	free(grid);
}
