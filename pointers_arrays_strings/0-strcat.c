#include "main.h"
/**
 * _strcat - concatenates a source string at the end of a destination string.
 * @dest: the destination string.
 * @src: the source string.
 * Return: the pointer to the destination.
 */
char *_strcat(char *dest, char *src)
{
	int dest_length, src_index;

	for (dest_length = 0; dest[dest_length]; dest_length++)
		;
	for (src_index = 0; src[src_index]; src_index++)
	{
		dest[dest_length] = src[src_index];
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
