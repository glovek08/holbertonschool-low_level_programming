#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar((9 * i) + '0');
		_putchar('\n');
	}
}
