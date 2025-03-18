#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 *	each element of an array.
 * @array: the given array.
 * @size: the size of the array.
 * @action: the function pointer.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (!array)
		return;

	for (; i < size; i++)
		action(array[i]);
}
