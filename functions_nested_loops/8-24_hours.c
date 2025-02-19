#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */
int jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			_putchar(':');
			if (minute < 10)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			else
			{
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
			}
			_putchar('\n');
		}
	}
	return (0);
}
