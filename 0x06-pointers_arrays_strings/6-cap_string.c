#include "main.h"

/**
 * isLower - check if character is lowercase
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - check if character is delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = ",;.!?(){}\n\t\" ";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words in string
 *
 * @s: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int fd = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fd = 1;
		else if (isLower(*s) && fd)
		{
			*s = *s - 32;
			fg = 0;
		}
		else
			fd = 0;
		s++;
	}
	return (ptr);
}
