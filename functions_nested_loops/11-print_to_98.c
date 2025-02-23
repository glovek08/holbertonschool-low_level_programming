#include <main.h>

/**
 * print_to_98 - prints all natural numbers to selected target.
 * @baseNum: the starter number.
 * Return: void.
 */

void print_to_98(int baseNum)
{
	int TARGET_NUM = 98;

	char number_too_long[25] = "ERROR (NUMBER TOO LONG)";

	if (starterNum > 999) /* Catches four digit numbers */
	{
		int i;
		for (i = 0; i < (sizeof(number_too_long) / sizeof(number_too_long[0])); i++)
		{
			_putchar(number_too_long[i]);
		}
		return;
	}
	if (starterNum > 98)
	{
		do
		{
			if (starterNum > 99) /* Handles three digit numbers */
			{
				_putchar((starterNum / 100) + '0');
			}
			_putchar(((starterNum / 10) % 10) + '0');
			putchar('0' + (starterNum % 10));
			if (starterNum != TARGET_NUM)
			{
				_putchar(',');
				_putchar(' ');
			}
			starterNum--;
		}
		while(targetNum >= TARGET_NUM)
	}
	else (starterNum < 98)
	{
		if (starterNum < 0) /* ADD LOGIC TO HANDLE NEGATIVE NUMBERS */
		{

		}
		else (starterNum > 9) /* Handles two digit numbers */
		{
			_putchar(((starterNum / 10) % 10) + '0');
		}
		putchar('0' + (starterNum % 10));
		if (starterNum != TARGET_NUM)
		{
			_putchar(',');
			_putchar(' ');
		}
		starterNum++;
	}
}
