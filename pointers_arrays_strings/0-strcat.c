#include "main.h"
/**
 * _strcat - concatenates a source string at the end of a destination string.
 * @dest: the destination string.
 * @src: the source string.
 * Return: the pointer to the destination.
 */
char *_strcat(char *dest, char *src)
{
	int destLength, srcIndex;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (srcIndex = 0; src[srcIndex]; srcIndex++)
	{
		dest[destLength] = src[srcIndex];
		destLength++;
	}
	dest[destLength] = '\0';
	return (dest);
}
