#include "lists.h"

/**
 * sum_listint - return sum of all the data (n) of a listint_t linked list.
 *
 * @head: pointer to the head of a list.
 *
 * Return: Sum (INT) else 0 if empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

