#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: a pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = calloc(nmemb, size);

	if (array == NULL)
		return (NULL);

	return (array);
}
