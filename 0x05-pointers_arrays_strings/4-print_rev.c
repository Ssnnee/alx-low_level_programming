#include "main.h"
/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: Pointer to string to print.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
