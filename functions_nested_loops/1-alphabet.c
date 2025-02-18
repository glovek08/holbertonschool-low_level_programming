#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
