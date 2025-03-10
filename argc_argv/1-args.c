#include <stdio.h>
/**
 * main - prints the number of arguments passed.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", (argc - 1));
	return (0);
}
