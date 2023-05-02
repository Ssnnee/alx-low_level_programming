#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_listint - Prints all elements of a list_t list
 * @h: singly linked list print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
