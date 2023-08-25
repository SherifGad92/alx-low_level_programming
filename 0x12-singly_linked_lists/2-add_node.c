#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: double pointer
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int l = 0;

	while (str[l])
		l++;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = l;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
