#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
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

	(void)argc;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	printf("%d\n", op_func(num1, num2));
	return (0);
}
