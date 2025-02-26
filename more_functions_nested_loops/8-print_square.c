#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 * Return: void.
 */
void print_square(int size)
{
	int x, y;

	if(size == 0)
	{
		_putchar('\n');
		return;
	}

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
}
