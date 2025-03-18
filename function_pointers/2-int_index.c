#include "function_pointers.h"
/**
 * int_index - searches for an integer in a given array.
 * @arr: the given array.
 * @size: the length of the array.
 * @cmp: function pointer to compare values.
 *
 * Return: index of the first element for which @cmp function doesn't
 * return '0' and '-1' if no ocurrances found or error.
 */
int int_index(int *arr, int size, int (*cmp)(int))
{
	int i = 0;

	if (!arr || size <= 0 || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(arr[i]) > 0)
			return (i);
	}
	return (-1);
}
