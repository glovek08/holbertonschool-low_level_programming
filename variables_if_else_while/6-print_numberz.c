#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
