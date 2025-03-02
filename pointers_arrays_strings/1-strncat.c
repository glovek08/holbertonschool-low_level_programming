#include "main.h"
/**
 * _strncat - concatenates two strings similar to strcat but it uses at most
 * 'n' bytes from 'src'.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the limit amount of bytes.
 * Return: the pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_index;

	for (dest_length = 0; dest[dest_length]; dest_length++)
		;
	for (src_index = 0; src_index <  n && src[src_index] != '\0'; src_index++)
	{
		dest[dest_length] = src[src_index];
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);

}
