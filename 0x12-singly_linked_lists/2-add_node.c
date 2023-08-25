#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the begining of a list_t list.
 *
 * @head: double pointer
 * @str: needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int l = 0;

	while (str[l])
		l++;

	s = malloc(sizeof(list_t));
	if (!s)
		return (NULL);

	s->str = strdup(str);
	s->len = l;
	s->next = (*head);
	(*head) = s;

	return (*head);
}
