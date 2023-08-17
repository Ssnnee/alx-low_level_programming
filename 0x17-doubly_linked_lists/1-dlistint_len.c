#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t re = 0;

	while (h)
	{
		re++;
		h = h->next;
	}
	return (re);
}

