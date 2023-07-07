#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int res;

	dif = n ^ m, res = 0;
	while (dif)
	{
		res += dif & 1;
		dif >>= 1;
	}
	return (res);
}
