#include "main.h"

/**
*string_nconcat - Concatenates two strings
*
*@s1: first string.
*@s2: second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: pointer to the concatenated space in memory (success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int len = n, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		len++;

	con = malloc(sizeof(char) * (len + 1));

	if (con == NULL)
		return (NULL);

	len = 0;

	for (x = 0; s1[x]; x++)
		con[len++] = s1[x];

	for (x = 0; s2[x] && x < n; x++)
		con[len++] = s2[x];

	con[len] = '\0';

	return (con);
}
