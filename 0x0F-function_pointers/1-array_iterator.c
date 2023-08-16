#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on array.
 *
 * @array: array
 * @size: size of the array
 * @action:  pointer to the function you need to use
 *
 * Return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
