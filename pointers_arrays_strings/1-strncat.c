#include "main.h"
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src, int n)
{
	int destLength, srcLength;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (srcLength = 0; srcLength < n; srcLength++)
	{
		dest[destLength = src[srcLength];
		destLength++;
	}
	dest[destLength] = '\0';
	return (dest);

}
