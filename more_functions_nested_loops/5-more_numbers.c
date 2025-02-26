#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 10; i >= 0; i--)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
