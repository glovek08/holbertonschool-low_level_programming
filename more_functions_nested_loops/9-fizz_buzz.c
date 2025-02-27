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

	for (i = 0; i <= 100; i++)
	{
		putchar(' ');
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i", i);
		}
	}
	return (0);
}
