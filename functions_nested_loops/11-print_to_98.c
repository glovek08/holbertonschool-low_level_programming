#include "main.h"

/**
* print_to_98 - prints all natural numbers from a giving starter number.
* @starterNum: the starter number.
*/

void print_to_98(int starterNum)
{
	int target = 98;

	while (1)
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
		if (starterNum == target)
			break;
		_putchar(',');
		_putchar(' ');
		starterNum += (starterNum < target) ? 1 : -1;
	}
	_putchar('\n');
}
