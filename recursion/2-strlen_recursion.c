#include "main.h"
/**
 * _strlen_recursion - gets the length of a given string.
 * @str: the string to be recursively butthole inspected.
 * Return: the length of @str.
 */
int _strlen_recursion(char *str)
{
	if (!*str)
		return (0);
	return (1 + _strlen_recursion(str + 1));
}
