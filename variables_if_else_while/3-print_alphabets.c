#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int letterMayus = 65, letterMinus = 97;

	while (letterMinus <= 122)
	{
		putchar(letterMinus);
		letterMinus++;
	}
	while (letterMayus <= 90)
	{
		putchar(letterMayus);
		letterMayus++;
	}
	putchar('\n');
	return (0);
}
