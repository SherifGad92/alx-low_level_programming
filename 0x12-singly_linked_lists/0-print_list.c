#include "lists.h"
#include <stdio.h>

/**
 * _strlen - Finds the length of a string.
 *
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);

	while (*s++)
		count++;
	return (count);
}

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h: pointer to the head of a list.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}

