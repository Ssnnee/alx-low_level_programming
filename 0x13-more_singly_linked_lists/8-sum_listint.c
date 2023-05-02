#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_listint - Sums all elements of a list
 * @head: pointer to the head of the list
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
