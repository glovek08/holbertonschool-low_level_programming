#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @count: The number of integers to print.
 *
 * Description: This function takes a variable number of integer arguments
 * and prints them, separated by the given string. If the separator is NULL,
 * numbers are printed without any separator. A newline is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int count, ...)
{
	va_list args;
	unsigned int i = 0;
	int curr_arg = 0;

	va_start(args, count);

	for (; i < count; i++)
	{
		curr_arg = va_arg(args, int);
		printf("%i", curr_arg);
		if (separator && *separator != '\0' && (i < count - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
