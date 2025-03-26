#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_all - Prints arguments based on a format string.
 * @format: Format specifiers (c=char, i=int, f=float, s=string).
 *           Unknown chars are ignored. NULL strings print "(nil)".
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
		if (format[i] == 'c'
				|| format[i] == 'i'
				|| format[i] == 'f'
				|| format[i] == 's')
		{
			if (!isFirst)
				printf(", ");

			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
			}
			isFirst = false;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
