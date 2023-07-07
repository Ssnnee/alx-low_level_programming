#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string to convert
 * Return: unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	if (!b)
		return (0);
	i = 0, res = 0;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		res = res * 2 + (b[i] - '0');
		i++;
	}
	return (res);
}
