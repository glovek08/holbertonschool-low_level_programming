#include "main.h"
/**
 * _pow_recursion - returns the value of 'base' raised to the power of 'exp'.
 * @base: the base value.
 * @exp: the exponent.
 * Return: 'base' to the power of 'exp', -1 if @exp is lower than 0;
 */
int _pow_recursion(int base, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	return (base * _pow_recursion(base, exp - 1));
}
