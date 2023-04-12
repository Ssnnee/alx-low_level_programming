#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid (success) or NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (l = 0; l < width; l++)
			grid[i][l] = 0;
	}
	return (grid);
}
