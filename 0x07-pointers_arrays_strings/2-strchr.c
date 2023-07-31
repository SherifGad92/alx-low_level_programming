#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: string
 * @c: charcter to be found
 *
 * Return: first occurrence of c if found
 *	null if not found
 */

char *_strchr(char *s, char c);
{
	int x;

	for (x = 0; s[x] >= '/0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
