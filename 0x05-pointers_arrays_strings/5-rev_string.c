#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: input string
 *
 * Return
 */

void rev_string(char *s)
{
	int i, x;
	char t;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (x = 0; x < i / 2; x++)
	{
		t = s[x];
		s[x] = s[i - 1 - x];
		s[i - 1 - x] = t;
	}
}
