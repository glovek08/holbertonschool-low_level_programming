#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all of its parameters.
 * @count: the count of parameters.
 * 
 * Return: the sum of all the parameters.
 */
int sum_them_all(const unsigned int count, ...);
{
	va_list nums;
	int result = 0, i = 0;

	if (!n)
		return(EXIT_FAILURE);
	va_start(nums, n); /* Initializing with the last named arg */
	for (; i < count; i++)
		result += va_arg(nums, int);
	va_free(nums);
	return (result);
}
