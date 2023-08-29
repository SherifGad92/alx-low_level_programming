#include "lists.h"

/**
 * pop_listint - delete the head node and return it's value.
 * @head: pointer of a pointer to a listint_t
 *
 * Return: value of the delete node (INT)
 */
int pop_listint(listint_t **head)
{
	int dn;
	listint_t *nhead;

	if (!(*head) || !head)
		return (0);

	nhead = (*head)->next;
	dn = (*head)->n;
	free(*head);
	*head = nhead;

	return (dn);
}


