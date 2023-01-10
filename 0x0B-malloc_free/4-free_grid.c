#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: an input array
 * @height: an input integer for height
 * Return: 0 as Success
 */
void free_grid(int **grid, int height)
{
	int n;
	n = 0;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
