#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal with \
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int ln, sp;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
		{
			for (sp = 0; sp < ln; sp++)
				_putchar(' ');
			_putchar('\\');

			if (ln == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
