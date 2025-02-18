#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10: prints the alphabet 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	int times;

	char sampleText[8] = "_putchar";

	for (times = 0; times < 10; times ++)
	{
		for (i = 0; i < 8; i++)
        	{
                	_putchar(sampleText[i]);
        	}
	}
}
