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

	grid = malloc(width);
	if (grid == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < width)
	{
		grid[i] = malloc(height);
		if (grid[i] == NULL)
		{
			return (NULL);
		}

		j = 0;
		while (j < height)
		{
			grid[i][j] = 0;
			j += 1;
		}

		i += 1;
	}

	return (grid);
}
