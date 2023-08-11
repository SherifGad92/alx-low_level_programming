#include "main.h"

/**
 * *array_range - creates an array of integers.
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return:  pointer to the allocated memory (success), NULL (fail)
 */

int *array_range(int min, int max)
{
	int *ary;
	int i, x = 0;

	if (min > max)
		return (NULL);
	ary = malloc(sizeof(*ary) * ((max - min) + 1));
	if (ary != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ary[x] = i;
			x++;
		}
		return (ary);
	}
	else
		return (NULL);

}
