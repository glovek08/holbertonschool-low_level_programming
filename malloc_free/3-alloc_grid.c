#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers.
 * @width: the array's width.
 * @height: the array's depth.
 * Return: the pointer to the newly allocated memory block of the 2D
 * array.
 */
int **alloc_grid(int width, int height)
{
	int **new_grid = (void *)0;
	int i = 0, j = 0;

	if (!height || !width)
		return (NULL);

	new_grid = malloc(((width * height)) * sizeof(int));

	if (!new_grid)
		return (NULL);

	for (; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			new_grid[i][j] = 0;
		}
	}

	return (new_grid);
}
