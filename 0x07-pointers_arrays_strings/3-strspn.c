#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: string of bytes to be located
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x] ; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
