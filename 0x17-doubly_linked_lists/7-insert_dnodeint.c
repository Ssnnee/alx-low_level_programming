#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given
 * position in a dlistint_t linked list.
 * @h: Double pointer to the head of the list.
 * @idx: The index of the list where the new node should
 * be added. Index starts at 0.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at
 * index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *res, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	res = malloc(sizeof(dlistint_t));
	if (res == NULL)
		return (NULL);

	res->n = n;
	res->prev = current;
	res->next = current->next;

	if (current->next != NULL)
		current->next->prev = res;

	current->next = res;

	return (res);
}
