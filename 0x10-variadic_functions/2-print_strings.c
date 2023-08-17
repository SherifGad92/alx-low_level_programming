#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *X;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(valist, n);

	if (n > 0)
		printf("%s", va_arg(valist, char *));

	for (i = 1; i < n; i++)
	{
		X = va_arg(valist, char*);
		if (X == NULL)
			X = "(nil)";
		printf("%s%s", separator, X);

	printf("\n");
	va_end(valist);
}
