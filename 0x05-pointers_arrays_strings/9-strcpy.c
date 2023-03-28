#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
