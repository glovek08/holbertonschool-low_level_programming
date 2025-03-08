#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard in algebraic notation.
 * @a: 2d array pointer representing the 8 rows and columns.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		putchar('\n');
	}
}
