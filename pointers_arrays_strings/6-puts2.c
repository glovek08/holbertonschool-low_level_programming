#include "main.h"
/**
 * puts2 - prints every other character from a given string by its pointer.
 * @str: the given string.
 * Return: void.
 */
void puts2(char *str)
{
	if (*str == "")
		return;
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
