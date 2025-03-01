#include "main.h"
/**
 * print_rev - prints a given string in reverse by its pointer.
 * @str: the given string.
 * Return: void.
 */
void print_rev(char *str)
{
char *strEnd = str;

while (*strEnd)
strEnd++;
while (strEnd > str)
{
strEnd--;
_putchar(*strEnd);
}
_putchar('\n');
return;
}
