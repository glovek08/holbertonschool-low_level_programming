#include "lists.h"
/**
 * _strlen - returns the length of a given string.
 * @str: the given string.
 *
 * Return: the length of @str.
 */
int _strlen(char *str)
{
	int str_len = 0;

	if (!str)
		return (0);
	while (*str)
	{
		str++;
		str_len++;
	}
	return (str_len);
}
