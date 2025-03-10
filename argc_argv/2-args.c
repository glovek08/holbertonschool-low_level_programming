#include <stdio.h>
/**
 * main - prints all arguments received.
 * @argc: arguments counter.
 * @argv: arguments vector.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	(void)argc;

	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
