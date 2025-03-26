#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_all - prints values based on the format string.
 * @format: list of types of arguments passed to the function.
 *           c: char, i: int, f: float, s: char* (prints (nil) if null).
 *           any other character is ignored.
 *
 * this function uses recursion to process the format string and
 * print the corresponding arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	bool isFirst = true;

	va_start(args, format);

	while (format && format[i])
	{
		if (!isFirst)
			printf(", ");

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
			printf("%s", str ? str : "(nil)");
			break;
		default:
			i++;
			continue;
		}
		isFirst = false;
		i++;
	}

	va_end(args);
	printf("\n");
}

