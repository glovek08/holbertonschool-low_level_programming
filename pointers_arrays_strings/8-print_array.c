#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - prints a given number of elements from an array of integers.
 * @arr: the given array.
 * @size: the amount of elements to be printed.
 * Return: void.
 */
void print_array(int *arr, int size)
{
int i;

if (size <= 0 || arr == NULL)
{
printf("\n");
return;
}
for (i = 0; i < size; i++)
{
printf("%d", arr[i]);
if (i < size - 1)
printf(", ");
}
printf("\n");
}
