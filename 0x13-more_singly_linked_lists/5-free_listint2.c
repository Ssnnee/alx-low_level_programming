#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * free_listint2 - Frees a listint_t list
 * @head: the listint_t to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
