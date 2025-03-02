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
	int destLength, srcIndex;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (srcIndex = 0; srcIndex <  n && src[srcIndex] != '\0'; srcIndex++)
	{
		dest[destLength] = src[srcIndex];
		destLength++;
	}
	dest[destLength] = '\0';
	return (dest);

}
