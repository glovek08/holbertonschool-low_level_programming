#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The input integer.
 *
 * Return: The absolute value of n. If n is negative, returns -n;
 * otherwise, returns n unchanged.
 */

int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
