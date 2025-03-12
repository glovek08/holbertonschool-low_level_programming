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
	int **new_grid = (void*)0;

	if (!height || !width)
		return (NULL);
	
	new_grid = calloc(width * height, sizeof(int));

	if (!new_grid)
		return (NULL);

	return (new_grid);
}
