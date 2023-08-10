#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 *
 * Return:  pointer to the allocated memory (success), exit(98) (fail)
 */
void *malloc_checked(unsigned int b)
{
	int *bl = malloc(b);

	if (bl == 0)
	{
		exit(98);
	}

	return (bl);
}
