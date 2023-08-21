#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, the written character. On failure, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
