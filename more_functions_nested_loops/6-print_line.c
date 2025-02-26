#include "main.h"
/**
 * print_line - prints a not gay line.
 * @n: the number of times the character '_' should be printed.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
