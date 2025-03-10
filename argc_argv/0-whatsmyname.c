#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * whoami - prints the program's name.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
