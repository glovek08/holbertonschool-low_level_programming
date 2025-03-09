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

	int divisor = 5; 
	/*TODO: Need a way to access divisor from one level up in stack */

	if (/*a + 2*/ * /*a*/ > num)
		return (1);
	if (num % divisor == 0 || num % (divisor + 2) == 0)
		return (0);
	return (is_prime_number(num - 1));
}
