#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a given integer.
 * @num: the given integer.
 * Return: the square root of @num, -1 if @num doesn't have a natural
 * square root.
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0 || num == 1)
		return (num);
	int guess = _sqrt_recursion(num - 1);
	
	if ((guess + 1) * (guess + 1) > num)
		return (guess);
	else
		return (guess + 1);
}
