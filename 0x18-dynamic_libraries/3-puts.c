#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: Pointer to string to print.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
