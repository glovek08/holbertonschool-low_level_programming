#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints numbers from 1 to 100, prints 'Fizz' for those divisible by 3
 * and 'Buzz' for divisible by 5. 'FizzBuzz' if both cases are true.
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
