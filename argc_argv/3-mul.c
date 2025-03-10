#include <stdio.h>
/**
 * main - prints the multiplication of two given integers.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char **argv)
{
	int num1 = 0, num2 = 0;
	int i = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	while (argv[1][i])
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
		i++;
	}
	i = 0;
	while (argv[2][i])
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
		i++;
	}
	printf("%i\n", num1 * num2);
	return (0);
}
