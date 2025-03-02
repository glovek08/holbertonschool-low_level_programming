#include "main.h"
#include <stdbool.h>
/**
 * _atoi - converts a giving string into an integer.
 * @str: the given string.
 * Return: the given string converted into int.
 */
int _atoi(char *str)
{
	bool isNegative = false;
	int strIntValue = 0;

	if (*str == '-')
	{
		isNegative = true;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		strIntValue = strIntValue * 10 + (*str - '0');
		str++;
	}
	return (isNegative ? -strIntValue : strIntValue);
}
