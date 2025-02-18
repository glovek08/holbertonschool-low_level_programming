#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	char textSample[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(textSample[i]);
		i++;
	}
	_putchar(' ');
	return (0);
}
