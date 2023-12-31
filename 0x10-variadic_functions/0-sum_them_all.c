#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of inputs
 *
 * Return: sum of parameters (sucess), 0 (fail)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, SUM = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		SUM = SUM + va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (SUM);
}
