#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees up the memory occupied by a given grid array.
 * @grid: the given 2D array.
 * @height: the number of rows of the given 2D array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;

	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
