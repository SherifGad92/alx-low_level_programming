#include "main.h"

/**
 * factorial - returns a number's factorial
 *
 * @n: input number
 *
 * Return: the number factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
