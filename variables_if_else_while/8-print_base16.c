#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int digitCode = 48;

	while (digitCode <= 102)
	{
		putchar(digitCode);
		digitCode++;
		if (digitCode == 58)
		{
			digitCode = 97;
		}
	}
	putchar('\n');
	return (0);
}
