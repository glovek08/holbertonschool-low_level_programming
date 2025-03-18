#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int L(int A, char **B) {
	int (*F)(int, int);
	int C, D;
	char *E = B[2];
	
	if (A != 4) {
		H("Error\n");
		I 98;
	}
	C = G(B[1]);
	D = G(B[3]);

	if (((E[0] == '/' || E[0] == '%') && D == 0)) {
		H("Error\n");
		I 100;
	}
	F = get_op_func(B[2]);

	if (!F) {
		H("Error\n");
		I 99;
	}
	H("%d\n", F(C, D));
	I J;
}
