#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: return -1 If value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	low = 0, high = jump;

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low = high;
		high += jump;
	}

	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);

		if (array[low] == value)
			return (low);

		low++;
	}

	return (-1);
}
