#include "main.h"
/**
 * rev_string - Reverses a string in place.
 *
 * @s: Pointer to the string to be reversed.
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char tmp;

	while (*(s + len) != '\0')
		len++;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
