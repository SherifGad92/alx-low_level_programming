#include "main.h"

/**
 * main - Entry point
 *
 * Discription: prints alphabet in lower case.
 *
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
