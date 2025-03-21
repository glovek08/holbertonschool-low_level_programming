#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints values based on the format string.
 * @format: List of types of arguments passed to the function.
 *           c: char, i: int, f: float, s: char* (prints (nil) if NULL).
 *           Any other character is ignored.
 *
 * This function uses recursion to process the format string and
 * print the corresponding arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	

	va_end(args);
	printf("\n");
}
