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
	int destLength, srcLength;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (srcLength = 0; srcLength < n; srcLength++)
	{
		dest[destLength] = src[srcLength];
		destLength++;
	}
	dest[destLength] = '\0';
	return (dest);

}
