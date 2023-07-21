#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: takes input from other function
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
