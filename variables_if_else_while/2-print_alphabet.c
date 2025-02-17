#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 if succesful.
*/

int main(void)
{
	int letterNum = 97;/* ASCII value of a = 65 */

	while (letterNum <= 122)
	{
		putchar(letterNum);
		letterNum++;
	}
	putchar('\n');
	return (0);
}
