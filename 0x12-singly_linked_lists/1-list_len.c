#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
