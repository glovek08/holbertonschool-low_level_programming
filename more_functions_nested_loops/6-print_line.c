#include "main.h"
/**
 * print_line - prints a not gay line.
 * @n: the number of times the character '_' should be printed.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
