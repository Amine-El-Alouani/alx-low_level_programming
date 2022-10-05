#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - int func
 * @width: input
 * @height: input
 * Return: value or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(**grid));
			if (grid[i] == 0)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
