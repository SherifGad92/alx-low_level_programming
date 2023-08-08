#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 *
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: ponter to the s1 then s2 (sucess),  NULL (fail)
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int x;
	char *ns;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ns = malloc((size1 + size2) * sizeof(char) + 1);
	if (ns == 0)
		return ('\0');

	for (x = 0; x <= size1 + size2; x++)
	{
		if (x < size1)
			ns[x] = s1[x];
		else
			ns[x] = s2[x - size1];
	}
	ns[x] = '\0';
	return (ns);
}
