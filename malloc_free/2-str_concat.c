#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two given strings.
 * @str_1: the first string.
 * @str_2: the second string to append to @str_1.
 * Return: a pointer to the new memory address or "NULL" if error.
 */

char *str_concat(char *str_1, char *str_2)
{
	unsigned int str_1_length = 0, str_2_length = 0, i = 0;
	char *new_str;

	if (str_1 == NULL || str_2 == NULL)
	{
		return (NULL);
	}

	while (str_1[str_1_length])
		str_1_length++;
	while (str_2[str_2_length])
		str_2_length++;

	new_str = malloc(sizeof(char) * (str_1_length + str_2_length + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < str_1_length; i++)
		new_str[i] = str_1[i];

	for (i = 0; i < str_2_length; i++)
		new_str[str_1_length + i] = str_2[i];
	new_str[str_1_length + str_2_length] = '\0';

	return (new_str);
}
