#include "main.h"
/**
 * cap_string - capitalizes all word of a string.
 * @str: the string.
 * Return: the string pointer with all words capitalized.
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char check_symbols[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	for (; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == check_symbols[j])
			{
				i++;
				while (str[i] && !(str[i] >= 'a' && str[i] <= 'z') &&
				!(str[i] >= 'A' && str[i] <= 'Z'))
				{
					i++;
				}
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
				break;
			}
		}
	}
	return (str);
}
