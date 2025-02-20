#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the multiplication tables up to 9.
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
				if (j != 10)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
				if (j != 10)
				{
					_putchar(',');
				}
			}
			if (j < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
