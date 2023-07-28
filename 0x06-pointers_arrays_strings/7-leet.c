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
		while (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		while (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';
		while (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		while (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		while (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
	}
	return (s);
}
