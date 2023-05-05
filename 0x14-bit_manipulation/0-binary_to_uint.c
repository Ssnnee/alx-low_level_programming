#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _stoi - Converts chars to ints
 * @c: char to convert
 *
 * Return: Converted int
 */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - calculates the length of the string
 * @s: input
 *
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
/**
 * binary_to_uint - Converts a string of 1's and 0's to a decimal number
 * @b: string to convert
 *
 * Return: Unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, len, power;
	int i;

	result = 0, len = _strlen(b), power = 1;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += _stoi(b[i]) * power;
		power *= 2;
	}
	return (result);
}
