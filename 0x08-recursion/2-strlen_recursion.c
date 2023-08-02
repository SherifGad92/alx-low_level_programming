#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string pointer
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s > '\0')
		size += _strlen_recursion(s + 1) + 1;

	return (size);
}
