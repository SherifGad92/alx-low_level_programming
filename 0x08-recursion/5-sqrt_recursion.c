#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 *
 * root - function to find root
 *
 * @n: input number
 * @R: square root
 *
 * Return: natural square root of n
 */

int root(int n, int R);
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}

/**
 * root - function to find root
 *
 * @n: input number
 * @R: square root
 *
 * Return: natural square root of n
 */
int root(int n, int R)
{
	if (R * R == n)
		return (R);
	else if (R * R < n)
		return (root(n, R + 1));
	else
		return (-1);
}
