#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @str: the string to be evaluated.
 * @accept: the string containing the bytes to be found.
 * Return: A pointer to the byte in @str that matches one of the
 * bytes in @accept, NULL is nothing is found.
 */
char *_strpbrk(char *str, char *accept)
{
	int i;

	while (*str)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*str == accept[i])
				return (str);
		}
		str++;
	}
	return ('\0');
}
