#include "main.h"
#include <stdio.h>
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

	for (; *str; str++)
	{
		if (*str == *accept)
			num_bytes++;
	}
	return (num_bytes);
}
