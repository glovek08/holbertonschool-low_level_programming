#include "main.h"
/**
 * print_to_98 - prints all natural numbers to selected target.
 * @starterNum: the number from which to count up or down.
 * Return: void.
 */
void print_to_98(int starterNum)
{
	int TARGET_NUM = 98;

	if (starterNum > 98)
	{
		do {
			if (starterNum > 99) /* Handles three digit numbers */
			{
				_putchar((starterNum / 100) + '0');
			}
			_putchar(((starterNum / 10) % 10) + '0');
			_putchar('0' + (starterNum % 10));
			if (starterNum != TARGET_NUM)
			{
				_putchar(',');
				_putchar(' ');
			}
			starterNum--;
		}
	while (starterNum >= TARGET_NUM);
	}
	else if (starterNum < 98)
	{
		if (starterNum < 0)
		{
			_putchar('-');
			_putchar((-starterNum / 10) + '0');
			_putchar((-starterNum % 10) + '0');
		}
		else if (starterNum > 9)
		{
			_putchar('0' + ((starterNum / 10) % 10));
		}
		_putchar('0' + (starterNum % 10));
		if (starterNum != TARGET_NUM)
		{
			_putchar(',');
			_putchar(' ');
		}
		starterNum++;
	}
}
