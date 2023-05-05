#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 *
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int result;

	result = 0;
	diff = n ^ m;

	while (diff != 0)
	{
		result += diff & 1;
		diff >>= 1;
	}
	return (result);
}
