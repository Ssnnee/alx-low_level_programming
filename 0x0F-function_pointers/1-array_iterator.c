#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
