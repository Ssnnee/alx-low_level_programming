#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i;
	char *res;

	i = 1;
	res = (char *)&i;
	return ((int)res[0]);
}
