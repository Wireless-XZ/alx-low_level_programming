#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - points to a two dimensional array
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = malloc(sizeof(int *) * height);
	if (array_2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2d[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array_2d[i][j] = 0;
	}
	return (array_2d);
}
