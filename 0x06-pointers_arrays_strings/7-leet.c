#include "main.h"

/**
 * leet - encodes as string into leet
 *
 * @s: a string
 *
 * Return: s
 */

char *leet(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		while (s[x] == 'a' || s[x] == 'A')
			s[x] = '4';
		while (s[x] == 'e' || s[x] == 'E')
			s[x] = '3';
		while (s[x] == 'o' || s[x] == 'O')
			s[x] = '0';
		while (s[x] == 't' || s[x] == 'T')
			s[x] = '7';
		while (s[x] == 'l' || s[x] == 'L')
			s[x] = '1';
	}
	return (s);
}
