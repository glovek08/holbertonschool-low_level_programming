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
	int **grid = (void *)0;

	if (!width || !height) return (NULL);
	grid = malloc(height * sizeof(int *));
	if (!grid) return (NULL);

	for (int i = 0; i < height; i++) {
	    if (!(grid[i] = calloc(width, sizeof(int)))) {
            	while (i--) free(grid[i]);
            	free(grid);
            	return (NULL);
        	}
    	}
	return (grid);
}
