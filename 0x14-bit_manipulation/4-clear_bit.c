#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index to change
 *
 * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n) - 1))
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
