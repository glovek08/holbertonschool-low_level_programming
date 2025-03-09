#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a given integer.
 * @num: the given integer.
 * Return: the square root of @num, -1 if @num doesn't have a natural
 * square root.
 */
int _sqrt_recursion(int num)
{
	int factor = 2, product = 1, i = 0;

	if (factor * factor > num)
		return (product);

	if (num % factor > num)
	{
		num = num / factor;
		i++;
		return (_sqrt_recursion(num));
	}

	if (i >= 2)
		product *= factor;
	factor++;

	return (_sqrt_recursion(num));
}
