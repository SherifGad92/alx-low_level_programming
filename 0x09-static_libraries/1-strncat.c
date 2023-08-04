#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest : firt string
 * @src : second string
 * @n : size of src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[i + x] = src[x];
	}
	dest[i + x] = '\0';
	return (dest);
}
