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
	int sd1, sd2;

	for (i = 0; i < size; i++)
	{
		sd1 = sd1 + a[i];
		sd2 = sd2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", sd1);
	printf("%d\n", ds2);
}
