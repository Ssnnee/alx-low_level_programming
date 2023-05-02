#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: head of the list
 * @index: emplacement of the node to delet
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; i < (index - 1) && current->next != NULL; i++)
		current = current->next;
	if (current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return (1);
}
