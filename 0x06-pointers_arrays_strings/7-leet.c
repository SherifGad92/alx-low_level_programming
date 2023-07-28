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
	char *ps = s;
	char letter[] = { 'A', 'E', 'O', 'T', 'L'};
	int key[] = { 4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*s == letter[i] || *s == letter[i] + 32)
			{
				*s = 48 + key[i];
			}
		}
		s++;
	}
	return (ps);
}
