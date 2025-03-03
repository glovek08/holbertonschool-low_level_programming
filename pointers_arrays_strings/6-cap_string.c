#include "main.h"
/**
 * cap_string - capitalizes all word of a string.
 * @str: the string.
 * Return: the string pointer with all words capitalized.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char check_symbols[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', '(', ')', '{', '}'};

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	for (i = 1; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == check_symbols[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					str[i] -= 32;
				}
				break;
			}
		}
	}
	return (str);
}

