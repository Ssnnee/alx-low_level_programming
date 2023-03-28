#include "main.h"
/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: input array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
