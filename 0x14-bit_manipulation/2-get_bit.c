#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input long integer
 * @index: index to start at
 *
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1;
	return (result);
}
