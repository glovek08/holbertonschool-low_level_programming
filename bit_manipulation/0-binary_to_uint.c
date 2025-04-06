#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string containig the binary value.
 *
 * Return: the converted number, 0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int str_length = _strlen(b), i = 0;

	for (; i < str_length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result <<= 1;
		if (b[i] == '1')
			result |= 1;
	}
	return (result);
}
/**
 * _strlen - returns the length of a given string.
 * @str: the given string.
 *
 * Return: the amount of characters in @str.
 */
unsigned int _strlen(const char *str)
{
	unsigned int str_len = 0;

	if (!str)
		return (str_len);
	while (str[str_len])
		str_len++;
	return (str_len);
}
