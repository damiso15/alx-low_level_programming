#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: input integer for columns
 * @height: input integer for rows
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **array_grid, n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_grid = (int**)malloc(sizeof(int *) * height);

	if (array_grid == NULL)
		return (NULL);
	
	n = 0;

	while (n < height)
	{
		array_grid[n] = (int *)malloc(sizeof(int) * width);

		if (array_grid[n] == NULL)
			return (NULL);
		n++;
	}

	m = 0;

	while (n < height)
	{
		while (m < width)
		{
			array_grid[n][m] = 0;
			m++;
		}
		n++;
	}
	return (array_grid);
}
