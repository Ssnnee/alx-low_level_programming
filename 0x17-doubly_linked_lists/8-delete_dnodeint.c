#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a
 * given index in a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 * Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crrt, *tp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	crrt = *head;
	if (index == 0)
	{
		*head = crrt->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(crrt);
		return (1);
	}

	for (i = 0; i < index - 1 && crrt != NULL; i++)
		crrt = crrt->next;

	if (crrt == NULL || crrt->next == NULL)
		return (-1);

	tp = crrt->next;
	crrt->next = tp->next;
	if (tp->next != NULL)
		tp->next->prev = crrt;
	free(tp);

	return (1);
}
