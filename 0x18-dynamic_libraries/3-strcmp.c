#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: difference between ASCII values of first non-matching character,
 * or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	return (s1[i] - s2[i]);
}
