#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(valist, n);

	if (n > 0)
		printf("%d", va_arg(valist, int));

	for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(valist, int));

	printf("\n");
	va_end(valist);
}
