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

	if (num == 2 || num == 3)
		return (1);

	if (num % 2 == 0 || num % 3 == 0)
		return (0);

	return ((num % 5 == 0 || num % 7 == 0) ? 0 : is_prime_number(num - 1));
}
