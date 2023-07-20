#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 *except 2 and 4
 *
 * Return: Always 0 (sucess)
 */

void print_most_numbers(void)
{
	for (int x = 0; x <= 9; x++)
		if (x != 2 && x != 4)
			_putchar(x + 48);
	_putchar('\n');
}
