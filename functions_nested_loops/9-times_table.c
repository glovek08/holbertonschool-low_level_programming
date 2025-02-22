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
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + result);
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
				if (j != 9)
				{
					_putchar(',');
				}
			}
			if (j < 9 && j != 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
