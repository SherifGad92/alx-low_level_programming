#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string of bytes to be located
 *
 * Return: a pointer tot eh matching byte,
 *	\0 if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;


	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				return (&s[x]);
		}
	}
	return ('\0');
}
