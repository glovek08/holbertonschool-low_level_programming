#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all of its parameters.
 * @count: the count of parameters.
 *
 * Return: the sum of all the parameters.
 */
int sum_them_all(const unsigned int count, ...)
{
	va_list nums;
	unsigned int i = 0;
	int result = 0;

	if (!count)
		return (0);
	va_start(nums, count); /* Initializing with the last named arg */
	for (; i < count; i++)
		result += va_arg(nums, int);
	va_end(nums);

	return (result);
}

