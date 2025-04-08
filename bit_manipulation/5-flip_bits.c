#include <stdlib.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 *	to get from one number to another.
 * @n: the first number.
 * @m: the second number to compare with @n.
 *
 * Return: the amount of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	int counter = 0;

	while (difference != 0)
	{
		if (difference & 1)
			counter++;
		difference >>= 1;
	}
	return (counter);
}
