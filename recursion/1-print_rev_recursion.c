#include "main.h"
/**
 * _print_rev_recursion - prints a given string in reverse.
 * @str: the string to be printed.
 * Return: void.
 */
void _print_rev_recursion(char *str)
{
	if (!*str)
		return;
	_print_rev_recursion(++str);
	_putchar(*str);
}
