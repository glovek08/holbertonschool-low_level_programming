#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int letterMayus = 65, letterMinus = 97;

	while (letterMayus <= 90)
	{
		putchar(letterMayus);
		letterMayus++;
	}
	while (letterMinus <= 122)
	{
		putchar(letterMinus);
		letterMinus++;
	}
	putchar('\n');
	return (0);
}
