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
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				if (!str)
					printf("(nil)");
				break;
			default:
				break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

