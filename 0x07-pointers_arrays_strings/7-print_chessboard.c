#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 *@a: chessboard array
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 7; y++)
			_putchar(a[x][y]);

		_putchar('\n');
	}
}
