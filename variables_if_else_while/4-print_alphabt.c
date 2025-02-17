#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int letterCode = 97;

	while (letterCode <= 122)
	{
		putchar(letterCode);
		letterCode++;
		if (letterCode == 113 || letterCode == 101)
			letterCode++;
	}
	putchar('\n');
	return (0);
}
