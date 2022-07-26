#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previously created 2D array
 * @grid: previous array
 * @height: array rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
