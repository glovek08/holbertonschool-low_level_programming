#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @count: The number of strings passed to the function.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int count, ...)
{
	va_list args;
	unsigned int i = 0;
	char *word;

	va_start(args, count);
	for (; i < count; i++)
	{
		word = va_arg(args, char *);

		if (!word || )
			printf("(nil)\n");
		else
	       	{
			printf("%s", word);
			if (i < (count - 1) && separator != '\0')
				printf("%c ", *separator);
		}
	}
	putchar('\n');
	va_end(args);
}
