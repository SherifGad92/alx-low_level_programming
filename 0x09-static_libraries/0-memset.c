#include "main.h"

/**
 * *_memset - fills memory with contact byte
 * @s: pointer of memoty area
 * @b: constant
 * @n: number of bytes filled
 *
 * Return: a pointer the memeory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		s[len] = b;
	}
	return (s);
}
