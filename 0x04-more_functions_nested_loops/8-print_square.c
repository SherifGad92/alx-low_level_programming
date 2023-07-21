#include "main.h"

/**
 * print_square - prints a square using #
 * @size:  the size of the square
 */

void print_square(int size)
{
	int ln, i;

	for (ln = 0; ln <= size; ln++)
	{
		for (i = 0; i <= size; i++)
			_putchar('#');
		_putchar('\n');
	}
}
