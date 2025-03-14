#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @size: the size of the new memory block.
 * Return: pointer to the newly allocated memory.
 */
void *malloc_checked(unsigned int size)
{
	char *mem_block = malloc(size * sizeof(*mem_block));

	if (!mem_block)
		return (98);
	return (mem_block);
}
