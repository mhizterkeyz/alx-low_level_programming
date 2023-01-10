#include <stdlib.h>
#include "main.h"

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
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height);
	if (grid == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width);
		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j += 1;
		}

		i += 1;
	}

	return (grid);
}
