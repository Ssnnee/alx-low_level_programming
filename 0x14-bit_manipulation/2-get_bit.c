#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: input long integer
 * @index: index to start at
 * Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > (8 * sizeof(n) - 1))
		return (-1);
	res = (n >> index) & 1;
	return (res);
}
