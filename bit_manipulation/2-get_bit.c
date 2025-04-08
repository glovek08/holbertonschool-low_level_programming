#include "main.h"
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @num: the number to scan.
 * @index: the index of the specified bit to be returned.
 *
 * Return: the value of the bit at @index, -1 on failure.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((num >> index) & 1);
}
