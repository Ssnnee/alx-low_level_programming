#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
		dest[j++] = '\0';

	return (dest);
}

