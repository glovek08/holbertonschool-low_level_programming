#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	int times;

	for (times = 0; times < 10; times++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
