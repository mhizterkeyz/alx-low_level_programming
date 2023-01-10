#include <stdlib.h>
#include "main.h"

/**
 * free_grid - does something
 * @grid: param
 * @height: param
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j += 1;
	}
	free(grid);
}
