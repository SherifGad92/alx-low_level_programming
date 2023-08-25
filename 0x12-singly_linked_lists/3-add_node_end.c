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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x = malloc(sizeof(list_t));
	list_t *tmp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	if (!x)
		return (NULL);

	x->str = strdup(str);
	x->len = l;
	x->next = NULL;

	if (!*head)
	{
		*head = x;
		return (x);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = x;

	return (x);
}
