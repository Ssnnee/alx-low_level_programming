#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, e;

	for (i = 0; i <= 9; i++)
	{
		for (e = 97; e < 123; e++)
		{
			_putchar(e)
		}
		_putchar('\n');
	}

}
