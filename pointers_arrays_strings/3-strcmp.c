#include "main.h"
/**
 * _strcmp - compares two given strings.
 * @str1: the first string.
 * @str2: the second string.
 * Return: the difference in character value.
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
