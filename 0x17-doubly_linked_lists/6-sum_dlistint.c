#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) of a dlistint_t
 * linked list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}

