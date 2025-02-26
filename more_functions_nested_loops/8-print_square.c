#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 * Return: void.
 */
void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x <= size; x++)
		{
			if (x == size)
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}
