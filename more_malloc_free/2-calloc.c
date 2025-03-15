#include "main.h"
#include "stdlib.h"
/**
 * _calloc - allocates memory for an array, initializes all memory blocks
 *		to '0'.
 * @nmemb: number of memory bytes.
 * @size: the size of the array.
 *
 * Return: a pointer to the allocated memory. Returns 'NULL' if
 *		@nmemb or @size is equal to '0'.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new_memb = (void *)0;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	new_memb = malloc(size * nmemb);
	if (!new_memb)
		return (NULL);

	while (i < size * nmemb)
	{
		new_memb[i] = 0;
		i++;
	}

	return (new_memb);
}
