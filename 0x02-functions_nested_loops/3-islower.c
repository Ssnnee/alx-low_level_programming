#include "main.h"

/**
 * _islower - Checks for lowercase character by showing 1 if true otherwise 0.
 *
 * @c: The character in ASCII code
 *
 * Return: Return 1 if true otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
