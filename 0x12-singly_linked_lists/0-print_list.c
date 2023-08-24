#include "lists.h"
#include <stdio.h>

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
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}

