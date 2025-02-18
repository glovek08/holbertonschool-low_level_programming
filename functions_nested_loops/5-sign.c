#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number.
 * Return: 1 if 'n' is positive, 0 if 0, "-1" if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
