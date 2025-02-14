#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: returns 0 if succesful.
 */
int main(void)
{
	/* prints the size of various data types */
	printf("Size of a char: %ld byte(s)\nSize of an int: %ld byte(s)\nSize of a long int: %ld byte(s)\nSize of a long long int: %ld byte(s)\nSize of a float: %ld byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
