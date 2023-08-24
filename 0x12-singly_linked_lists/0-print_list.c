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
	int count;

	if (!s)
		return (0);

	for (count = 0; *s != '\0'; s++)
		++count;

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
	size_t node = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->n), h->n ? h->n : "(nil)");
		h = h->next;
		node++;
	}
	return (node);
}

