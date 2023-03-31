#include "main.h"

/**
 * rot13 - encode into a string using rot13
 * @str: input string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *leet_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *leet_codes = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_codes[j];
				break; /* exit inner loop once a match is found */
			}
		}
	}
	return (str);
}
