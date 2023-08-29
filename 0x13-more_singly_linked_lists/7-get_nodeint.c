#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to a head of a list.
 * @index: which node to fetch from a list starting at 0.
 *
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *node;

	if (!head)
		return (NULL);

	node = head;
	while (x < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		x++;
	}
	return (node);
}


