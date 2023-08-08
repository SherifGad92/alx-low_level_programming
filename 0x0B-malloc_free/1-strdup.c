#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: to the duplicated string (sucess),  NULL (fail)
 */

char *_strdup(char *str)
{
	int x;
	int size;
	char *nstr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	nstr = malloc(size * sizeof(*str) + 1);

	if (nstr == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
			nstr[x] = str[x];
	}
	return (nstr);
}
