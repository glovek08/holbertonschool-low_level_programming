#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - Concatenates a string into another string, allocating
 *                  a new memory block for the result.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to concatenate from @src.
 *
 * Return: A pointer to the new memory block containing both strings
 *         concatenated, or NULL if memory allocation fails.
 */

char *string_nconcat(char *dest, char *src, unsigned int n)
{
	char *new_str = (void *)0;
	unsigned int dest_len = 0, src_len = 0, i = 0;

	if (!dest)
		dest = "";
	if (!src)
		src = "";

	while (src[src_len])
		src_len++;

	while (dest[dest_len])
		dest_len++;

	if (n > src_len)
		n = src_len;

	new_str = malloc(dest_len + n + 1);
	if (!new_str)
		return (NULL);

	for (; i < n; i++)
	{
		new_str[dest_len + i] = src[i];
	}

	new_str[dest_len + n] = '\0';

	return (new_str);

}
