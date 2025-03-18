#include "function_pointers.h"
/**
 * op_add - adds two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - finds the difference between two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the difference between @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - finds the product of two given integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two given integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the result of the division between @a and @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds the remainder of the division between two given integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: the remainder of the division between @a and @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
