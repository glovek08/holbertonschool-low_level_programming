#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int num1, num2;
	char *operator = argv[2];

	if (argc != 4)
		return (98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (((operator[0] == '/' || operator[0] == '%') && num2 == 0))
		return (98);

	op_func = get_op_func(argv[2]);

	printf("%d\n", op_func(num1, num2));
	return (EXIT_SUCCESS);
}
