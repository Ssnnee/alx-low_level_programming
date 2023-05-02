#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * pop_listint - Pops off the head of the list and returns its contents
 * @head: head of the list
 *
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);

}
