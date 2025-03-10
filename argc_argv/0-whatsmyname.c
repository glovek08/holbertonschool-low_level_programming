#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program's name.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
