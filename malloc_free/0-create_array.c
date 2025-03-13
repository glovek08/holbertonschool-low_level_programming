#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - create an array of chars with a specific char.
 * @size: the size of the array.
 * @chr: the character to initialize the array with.
 * Return: pointer to the array, "NULL" if it fails.
 */
char *create_array(unsigned int size, char chr)
{
	unsigned int i = 0;
	char *str = malloc(sizeof(char) * size);

	if (!size || !str) return (NULL);
	for (; i < size; i++) str[i] = chr;
	return (str);
}
