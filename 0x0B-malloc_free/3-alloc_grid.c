#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width
 * @height: height
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid = malloc(sizeof(int *) * height);

	if (grid == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
