#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *
 * @size: array size
 * @c: character
 *
 * Return: pointer to the array (sucess),  NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *pnt = malloc(size);

	if (size == 0 || pnt == 0)
		return (NULL);

	while (size--)
		pnt[size] = c;
	return (pnt);
}
