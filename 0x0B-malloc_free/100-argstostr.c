#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string (success)
 * or NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	int total_len, i, len, pos, len2, l;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len + 1;
	}

	result = malloc(total_len * sizeof(char));
	if (result == NULL)
		return (NULL);
	pos = 0;
	for (l = 0; l < ac; l++)
	{
		len2 = 0;
		while (av[l][len2] != '\0')
		{
			result[pos] = av[l][len2];
			pos++;
			len2++;
		}
		result[pos] = '\n';
		pos++;
	}
	result[pos] = '\0';

	return (result);
}
