#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 */

void print_numbers(void)
{
	for (int x = 0; x <= 9; x++)
	{
		_putchar(x + 48);
	}
	_putchar('\n');
}
