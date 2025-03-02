#include "main.h"
/**
 * reverse_array - reverses an array of integers.
 * @arr: the array to be reversed.
 * @num_el: number of elements in the array.
 */
void reverse_array(int *arr, int num_el)
{
	int temp_el = 0;
	int i = 0;

	for (i = 0; i < num_el / 2; i++)
	{
		temp_el = arr[i];
		arr[i] = arr[num_el - 1 - i];
		arr[num_el - 1 - i] = temp_el;
	}
}
