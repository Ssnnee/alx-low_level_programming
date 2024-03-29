#include "main.h"
/**
 * print_binary -  prints the binary representation
 * of a number
 *
 * @n: integer to convert
 * Return : void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /*division par 2*/
	_putchar((n & 1) + '0');  /*renvoi à l'envers*/
}
