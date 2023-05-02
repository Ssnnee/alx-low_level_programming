#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: current place in list
 * @n: int to add to list
 *
 * Return: pointer current position
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
