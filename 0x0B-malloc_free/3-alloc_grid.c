#include <stdlib.h>
#include "main.h"

/**
 * free_grid - does something
 * @grid: param
 * Return: void
 */
void free_grid(int **grid, int l)
{
	int j = 0;

	while (j <= l)
	{
		free(grid[j]);
		j += 1;
	}
	free(grid);
}

/**
 * alloc_grid - does something
 * @width: param
 * @height: param
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free_grid(grid, i);
			return (NULL);
		}
		k = 0;
		while (k < width)
		{
			grid[i][k] = 0;
			k += 1;
		}

		i += 1;
	}

	return (grid);
}
