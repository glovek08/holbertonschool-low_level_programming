#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @num: the given number.
 * Return: the factorial of @num, -1 if @num is lower than 0
 * and 1 if @num is 0.
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
