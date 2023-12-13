#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: If value is not present in array or if array is NULL,return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else if (array[i] == value)
			return (i);
	}

	return (-1);
}
