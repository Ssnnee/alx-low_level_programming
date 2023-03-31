#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

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
