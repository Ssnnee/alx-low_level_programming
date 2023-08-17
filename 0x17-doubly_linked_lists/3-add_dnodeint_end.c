#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *result, *current;

	result = malloc(sizeof(dlistint_t));

	if (result == NULL)
		return (NULL);

	result->n = n;
	result->next = NULL;

	if (*head == NULL)
	{
		result->prev = NULL;
		*head = result;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = result;
		result->prev = current;
	}

	return (result);
}
