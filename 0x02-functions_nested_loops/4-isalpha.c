#include "main.h"

/**
 * _islower - Checks for alphebetic character by showing 1 if true otherwise 0.
 * @c: The character in ASCII code
 *
 * Description: Determines whether a given character is an alphabetic character
 * in the ASCII table by checking if it falls within the range of lowercase
 * letters (97-122) or uppercase letters (65-90).
 * Return: Return 1 if true otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
