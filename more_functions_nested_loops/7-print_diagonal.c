#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: the number of lines.
 * Return: void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		return;
	}
}
