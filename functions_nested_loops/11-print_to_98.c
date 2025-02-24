#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from starterNum to 98.
 * @starterNum: The starting number.
 */
void print_to_98(int starterNum)
{
	int target = 98;

	while (starterNum != target)
	{
		if (starterNum < 0)
		{
			_putchar('-');
			_putchar((-starterNum / 10) + '0' * (-starterNum >= 10));
			_putchar((-starterNum % 10) + '0');
		}
		else
		{
			if (starterNum >= 10)
				_putchar((starterNum / 10) + '0' * (starterNum >= 100));
			if (starterNum >= 100)
				_putchar(((starterNum / 10) % 10) + '0');
			_putchar((starterNum % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
		starterNum += (starterNum < target) ? 1 : -1;
	}
	_putchar('9');
	_putchar('8');
}

