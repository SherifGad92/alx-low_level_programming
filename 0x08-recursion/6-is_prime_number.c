#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: input number
 * @x: int that n is divided by
 *
 * Return: 1 for prime, 0 for not prime
 */

int test(int n, int x);
int is_prime_number(int n)
{
	return (test(n, 2));
}

/**
 * test - checks numbers n divisable by
 *
 * @n: input number
 * @x: int that n is divided by
 *
 * Return: int
 */

int test(int n, int x)
{
	if (x >= n && n > 1)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (test(n, x + 1));
}
