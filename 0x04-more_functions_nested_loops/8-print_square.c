#include "main.h"

/**
 * print_square - prints a square using #
 * @size:  the size of the square
 */

void print_square(int size)
{
	int ln, i;

	if (size > 0)
	{
		for (ln = 0; ln < size; ln++)
		{
			for (i = 0; i < ln; i++)
				_putchar('#');

			if (ln == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
