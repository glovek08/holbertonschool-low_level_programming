#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using a function pointer.
 * @name: the name to print.
 * @f: the function pointer.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
