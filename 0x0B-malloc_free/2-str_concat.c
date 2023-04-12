#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string (success) or
 * NULL (failure)
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len++;

	len2 = 0;
	while (s2[len2])
		len2++;
	result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';

	return (result);
}
