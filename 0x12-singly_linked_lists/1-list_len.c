#include "lists.h"
#include <stdio.h>

/**
  * list_len -  returns the number of elements in a linked list_t list.
  *
  * @h: pointer to the head of a list.
  *
  * Return: number of elements in a linked list_t list.
  */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}
