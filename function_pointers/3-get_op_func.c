#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the function according to the passed argument.
 * @s: the character containing the operator selector.
 *
 * Return: pointer to the function according to @s, NULL on error.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
