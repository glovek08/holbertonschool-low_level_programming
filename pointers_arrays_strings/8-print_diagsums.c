#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: the pointer to the 2d array.
 * @size: the size of the matrix.
 * Return: void.
 */
void print_diagsums(int *arr, int size)
{
	int i = 0, diag_A = 0, diag_B = 0;

	for (; i < size; i++)
	{
		diag_A += arr[i * size + i];
	}
	for (; i < size; i++)
	{
		diag_B += *((arr + i * size) + (size - 1 - i)) + diag_A;
	}
	printf("%i, %i", diag_A, diag_B);
}
