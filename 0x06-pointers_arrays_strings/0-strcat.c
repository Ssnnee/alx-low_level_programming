#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, const char *src)
{
	strcat(dest, src);
	return (dest);
}
