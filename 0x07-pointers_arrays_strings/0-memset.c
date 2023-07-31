#include "main.h"

/**
 * _memset - Fills Memory with a constant byte.
 *
 * @s: pointer
 * @b: constant
 * @n: byte size
 *
 * Return: xl
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}
	return (s);
}
