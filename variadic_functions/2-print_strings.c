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
	char *word = (void *)0;

	va_start(args, count);
	for (; i < count; i++)
	{
		strcpy(word, va_arg(args, char *));
		if (word == (void *)0)
			printf("(nil)\n");
		printf("%s", word);
		printf("%c", *separator);
	}
	putchar('\n');
	va_end(args);
}
