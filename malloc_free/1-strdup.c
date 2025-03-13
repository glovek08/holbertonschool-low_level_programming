#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string.
 * Return: pointer to a new string, "NULL" if @str is "NULL".
 */
char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int str_length = 0, i = 0;

	if (!str) return (NULL);
	while (str[str_length]) str_length++;
	str_cpy = malloc(sizeof(char) * (str_length + 1));
	if (!str_cpy) return (NULL);
	for (; i <= str_length; i++) str_cpy[i] = str[i];
	return (str_cpy);
}
