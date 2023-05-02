#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: head of the list
 * @index: the node to stop
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	current = head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count == index && current != NULL)
		return (current);
	return (NULL);
}
