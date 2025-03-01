#include "main.h"
/**
 * puts_half - prints half of a given string by its pointer.
 * @str: the given string.
 * Return: void.
 */
void puts_half(char *str)
{
	int strLength = 0;

	for (; str[strLength]; strLength++)
	;
	for (str += (strLength + (strLength % 2)) / 2; *str; _putchar(*str++))
	;
	_putchar('\n');
}
