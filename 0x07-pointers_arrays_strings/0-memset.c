#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: a pointer
 * @b: constant to be added
 * @n: number of bytes to be filled
 *
 * Return: X a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;
	unsigned char *x = s;

	for (i = 0; i < n; i++)
		x[i] = b;

	return (x);
}
