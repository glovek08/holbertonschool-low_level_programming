#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
/**
 * _atoi = converts a giving string into an integer.
 * @str: the given string.
 * Return: the given string converted into int.
 */
int _atoi(char *str)
{
	bool isNegative = false;
	int strIntValue = 0;

	while (isspace(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-' || isspace(*str))
	{
		if (*str == '-')
		{
			isNegative = !isNegative;
		}
		str++;
	}
	while (*str != '\0' && !isdigit(*str))
	{
		str++;
	}
	while (isdigit(*str))
	{
		if (strIntValue <= INT_MIN)
			return (INT_MIN);
		else if (strIntValue >= INT_MAX)
			return (INT_MAX);
		strIntValue = strIntValue * 10 + (*str - '0');
		str++;
	}
	return (isNegative ? -strIntValue : strIntValue);
}
