#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to number
 * @index: index to change
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
