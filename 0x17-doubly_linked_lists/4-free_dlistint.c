#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function goes through the list
 * node by node and frees each one.
 * It uses a temporary pointer to keep track of the
 * node to free, because freeing
 * the node also invalidates the 'next'
 * pointer that would be used to traverse to the next node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
