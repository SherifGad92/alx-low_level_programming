#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix.
 *
 * @a: a square matrix
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sd1 = 0;
	int sd2 = 0;

	for (i = 0; i < size; i++)
	{
		sd1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sd2 += a[i];
		a -= size;
	}

	printf("%d, ", sd1);
	printf("%d\n", sd2);
}
