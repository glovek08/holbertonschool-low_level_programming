#include "main.h"
/**
 * is_prime_number - evaluated whether or not a given integer is a
 * prime number.
 * @num: the given integer.
 * Return: 1 if @num is a prime number, 0 otherwise.
 */
int is_prime_number(int num)
{
	if (num < 2)
		return (0);
	if (num % 2 == 0 || num % 3 == 0)
		return (0);
	if (num % 5 == 0 || num % (5 + 2) == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(num - 1));
	}
}
