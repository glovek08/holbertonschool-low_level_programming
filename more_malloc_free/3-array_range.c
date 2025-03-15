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
	int i = 0;

	if (start > end)
		return (NULL);
	if (start < 0)
		start = 0 ;

	arr_range = malloc(sizeof(int) * (start + end + 1));
	if (!arr_range)
		return (NULL);

	for (; i < (start + end + 1); i++)
	{
		arr_range[i] = start + i;
	}

	return (arr_range);
}
