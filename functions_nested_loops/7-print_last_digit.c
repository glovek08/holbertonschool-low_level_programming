#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - finds the last digit of a giving number.
 * @n: the number.
 * Return: 0 if successful.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
