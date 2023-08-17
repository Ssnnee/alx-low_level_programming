#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *result;

	result = malloc(sizeof(dlistint_t));

	if (result == NULL)
		return (NULL);

	result->n = n;
	result->prev = NULL;
	result->next = *head;

	if (*head != NULL)
		(*head)->prev = result;

	*head = result;

	return (result);
}
