#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first eement (sucess) , -1 (fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}
	return (-1);
}
