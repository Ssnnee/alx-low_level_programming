#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;
	return (*c == 1);
}
