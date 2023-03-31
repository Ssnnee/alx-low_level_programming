#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *n)
{
	int i, j;
	const char s1[] = "aAeEoOtTlL";
	const char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(s1); j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
