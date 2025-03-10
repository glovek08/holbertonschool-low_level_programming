#include <stdio.h>
/**
 * main - prints the multiplication of two given integers.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = argv[1], num2 = argv[2];
	
	printf("%i", (num1 * num2));
	return (num1 * num2);
}
