#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers containing a range of numbers.
 * @start: the starting number.
 * @end: the ending number.
 *
 * Return: the pointer to the new array, 'NULL' on error.
 */
int *array_range(int start, int end)
{
	int *arr_range  = (void *)0;
	int i = 0, length = 0;

	if (start > end)
		return (NULL);

	length = end - start + 1;

	arr_range = malloc(sizeof(int) * length);
	if (!arr_range)
		return (NULL);

	for (; i < length; i++)
		arr_range[i] = start + i;

	return (arr_range);
}
