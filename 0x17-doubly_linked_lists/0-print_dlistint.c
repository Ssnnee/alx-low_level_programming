#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements_number = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		elements_number++;
	}

	return (elements_number);
}
