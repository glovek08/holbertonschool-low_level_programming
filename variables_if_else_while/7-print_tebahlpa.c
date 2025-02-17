#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int letterCode = 122;

	while (letterCode >= 97)
	{
		putchar(letterCode);
		letterCode--;
	}
	putchar('\n');
	return (0);
}
