#include "main.h"
#include "stdio.h"
/**
 * print_binary - prints the binary representation of a number.
 * @num: the given number.
 *
 * Return: the binary representation of @num.
 */
void print_binary(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num > 1)
		print_binary(num >> 1);
	_putchar((num & 1) + '0');
}
