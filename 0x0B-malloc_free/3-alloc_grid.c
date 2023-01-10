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

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		grid[i] = calloc(width * sizeof(int), sizeof(int));
		if (grid[i] == NULL)
		{
			int j = 0;

			while (j <= i)
			{
				free(grid[j]);
				j += 1;
			}
			free(grid);
			return (NULL);
		}

		i += 1;
	}

	return (grid);
}
