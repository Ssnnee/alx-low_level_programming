#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
