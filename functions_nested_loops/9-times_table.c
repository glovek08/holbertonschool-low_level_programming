#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: void.
 */
void times_table(void)
{
	int i, MULTIPLIER = 9, result;

	for (i = 0; i <= 10; i++)
	{
		result = MULTIPLIER * i;
		if (result < 10)
		{
			_putchar('0' + result);
		}
		else
		{
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
		if (i < 10)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
