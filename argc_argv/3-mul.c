#include <stdio.h>
#include <stdbool.h>
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
	bool num1_is_negative = false;
	bool num2_is_negative = false;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		num1_is_negative = true;
		i = 1;
	}
	while (argv[1][i])
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
		i++;
	}
	if (num1_is_negative)
		num1 *= -1;
	i = 0;
	if (argv[2][0] == '-')
	{
		num2_is_negative = true;
		i = 1;
	}
	while (argv[2][i])
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
		i++;
	}
	if (num2_is_negative)
		num2 *= -1;
	printf("%i\n", num1 * num2);
	return (0);
}
