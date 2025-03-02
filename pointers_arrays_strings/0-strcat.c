#include "main.h"
/**
 * _strcat - concatenates a source string at the end of a destination string.
 * @dest: the destination string.
 * @src: the source string.
 * Return: the pointer to the destination.
 */
char *_strcat(char *dest, char *src)
{
	int strDestLength, strSrcLength;

	for (strDestLength = 0; dest[strDestLength]; strDestLength++)
		;
	for (strSrcLength = 0; src[strSrcLength]; strSrcLength++)
	{
		dest[strDestLength] = src[strSrcLength];
		strDestLength++;
	}
	dest[strDestLength] = '\0';
	return (dest);
}
