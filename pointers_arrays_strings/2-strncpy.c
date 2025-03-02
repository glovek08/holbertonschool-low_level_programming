#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: the destionation string.
 * @src: the source string.
 * @max: the max amount of characters to be copied.
 * Return: the destination string.
 */
char *_strncpy(char *dest, char *src, int max)
{
	int src_index = 0;

	for (; src_index < max && src[src_index] != '\0'; src_index++)
	{
		dest[src_index] = src[src_index];
	}
	for (; src_index < max; src_index++)
		dest[src_index] = '\0';
	return (dest);
}
