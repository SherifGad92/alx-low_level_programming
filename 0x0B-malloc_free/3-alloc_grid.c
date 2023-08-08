#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 *
 * @width: number of coloumns
 * @height: number of rows
 *
 * Return: a pointer to a 2D array of 0s (sucess),  NULL (fail)
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **ary;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	ary = malloc(height * sizeof(*ary));
	if (ary == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ary[h] = malloc(width * sizeof(**ary));
		if (ary[h] == NULL)
		{
			for (w = 0; w < h;  w++)
				free(ary[w]);
			free(ary);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ary[h][w] = 0;
		}
	}
	return (ary);
}
