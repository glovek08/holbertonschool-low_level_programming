#ifndef FPTRS_H
#define FPTRS_H

#include <stddef.h>

typedef struct op
{
    char *op;
    int (*f)(int, int);
} op_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

int (*get_op_func(char *s))(int, int);
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
