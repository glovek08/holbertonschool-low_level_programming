#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @str: the string the be evaluated.
 * @accept: string containing the characters to match.
 * Return: the number of bytes in the initial segment of @str
 * only found in @accept.
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int num_bytes = 0;
	bool isMatch = false;
	char *temp_accept;

	for (; *str; str++)
	{
		isMatch = 0;
		temp_accept = accept;
		while (*temp_accept)
		{
			if (*str == *temp_accept)
			{
				isMatch = 1;
				break;
			}
			temp_accept++;
		}
		if (isMatch)
			num_bytes++;
		else
			return (num_bytes);
	}
	return (num_bytes);
}
