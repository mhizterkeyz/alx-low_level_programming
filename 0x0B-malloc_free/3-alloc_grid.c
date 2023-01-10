#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - does something
 * @width: param
 * @height: param
 * Return: int
 */
int **alloc_grid(int height, int width)
{
	int **grid;
	int i;

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
		grid[i] = calloc(width);

		i += 1;
	}

	return (grid);
}
