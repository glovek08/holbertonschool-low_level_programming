#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a giving string to the standard output.
 * @str: the given string.
 * Return: void.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
return;
}
