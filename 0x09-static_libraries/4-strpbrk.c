#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: string to be searched
 * @accept: string of bytes to be searched for
 *
 * Return: pointer to the matched byte
 *	\0 if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' ; y++)
		{
			if (accept[y] == s[x])
				return (&s[x]);
		}
	}
	return ('\0');
}
