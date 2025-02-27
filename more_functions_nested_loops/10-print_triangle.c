#include "main.h"
/**
 * print_triangle - prints a triangle out of a giving size.
 * @size: the size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++, _putchar('\n'))
		for (j = 0; j < size; j++)
			_putchar(j < size - i ? ' ' : '#');
}
