#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	char textSample[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(textSample[i]);
	}
	return (0);
}
