#include "main.h"
/**
 * string_toupper - uppercases all letter of a string.
 * @str: the string to uppercase.
 * Return: the string pointer with all letters uppercased.
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
