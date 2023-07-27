#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @n : array size
 * @a : Array of integers
 *
 * Return
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < (n / 2); i++)
	{
		a[i] = t;
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
