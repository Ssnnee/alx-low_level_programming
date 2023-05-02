#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * free_listint - Frees a listint_t list
 * @head: the listint_t to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
