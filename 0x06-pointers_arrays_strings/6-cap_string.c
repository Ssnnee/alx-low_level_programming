#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	char *result = str;

	if (result[0] >= 'a' && result[0] <= 'z')
		result[0] -= 32;

	for (i = 0; result[i] != '\0'; i++)
	{
		/* Check for word boundary characters */
		switch (result[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				/* Check if the next character is lowercase */
				if (result[i + 1] >= 'a' && result[i + 1] <= 'z')
					result[i + 1] -= 32;
				break;
		}
	}
	return (result);
}
