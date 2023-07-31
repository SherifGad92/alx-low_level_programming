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
	unsigned int i = 0;
	char *xl = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (xl);
}
