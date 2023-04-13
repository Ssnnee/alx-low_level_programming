#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value (inclusive) to include in the array
 * @max: maximum value (inclusive) to include in the array
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max ; i++, min++)
		array[i] = min;

	return (array);
}
