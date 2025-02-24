#include "main.h"

/**
* print_to_98 - prints all natural numbers to a given target.
* @starterNum: the starting number.
* Return: void.
*/

void print_to_98(int starterNum)
{
	int target = 98;

	while (starterNum != target)
	{
		if (starterNum < 0)
		{
			_putchar('-');
			if (-starterNum >= 100)
				_putchar((-starterNum / 100) + '0');
			if (-starterNum >= 10)
				_putchar(((-starterNum / 10) % 10) + '0');
			_putchar((-starterNum % 10) + '0');
		}
		else
		{
			if (starterNum >= 100)
				_putchar((starterNum / 100) + '0');
			if (starterNum >= 10)
				_putchar(((starterNum / 10) % 10) + '0');
			_putchar((starterNum % 10) + '0');
		}
		if (starterNum != target)
		{
			_putchar(',');
			_putchar(' ');
		}
		starterNum += (starterNum < target) ? 1 : -1;
	}
	_putchar('\n');
}
