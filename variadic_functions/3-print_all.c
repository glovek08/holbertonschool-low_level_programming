#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 *          c: char, i: integer, f: float, s: char * (if NULL, print (nil)).
 *          Any other char is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		if (format[i] == 'c')
			printf("%c", (char)va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", (float)va_arg(args, double));
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
