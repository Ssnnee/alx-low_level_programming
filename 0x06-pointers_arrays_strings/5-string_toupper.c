#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}

	return (s);
}
