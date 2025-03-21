#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_next - Helper function to handle recursion for print_all.
 * @fmt: Pointer to the current position in the format string.
 * @args: va_list containing the variadic arguments.
 *
 * This function processes the format string recursively and prints
 * the corresponding arguments based on the format specifiers.
 */
void print_next(const char *fmt, va_list args)
{
	char current_format;

	if (*fmt == '\0')
		return;
	current_format = *fmt;
	if (current_format == 'c' || current_format == 'i'
			|| current_format == 'f'
			|| current_format == 's')
	{
		if (current_format == 'c')
		{
			char c = (char)va_arg(args, int);

			printf("%c", c);
		}
		else if (current_format == 'i')
		{
			int i = va_arg(args, int);

			printf("%d", i);
		}
		else if (current_format == 'f')
		{
			double f = va_arg(args, double);

			printf("%f", f);
		}
		else if (current_format == 's')
		{
			char *s = va_arg(args, char *);

			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
		}
		if (*(fmt + 1) != '\0')
			printf(", ");
	}
	print_next(fmt + 1, args);
}
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
	print_next(format, args);
	va_end(args);
	printf("\n");
}
