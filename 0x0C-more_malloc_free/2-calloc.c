#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 *
 * @size: unsigned int size
 * @nmemb: unsigned integer number of elements.
 *
 * Return:  pointer to the allocated memory (success), NULL (fail)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ary;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ary = malloc(nmemb * size);
	if (ary != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ary[i] = 0;
		return (ary);
	}
	else
		return (NULL);
}
