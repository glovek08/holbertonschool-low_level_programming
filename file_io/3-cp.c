#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - Entry point for program that 
 *	copies content form a file to another file.
 * @src_filename: the source file.
 * @dest_filename: the destination file.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
	int file_from = open(argv[1], O_RONLY);
	int file_to = open(argv[2], O_WRONLY | O_TRUNC, 0664);
	char *buffer = (char *)malloc(5120);
	ssize_t bytes_read = 0;

	if (!buffer)
	{
		fprintf(sterr, "Buffer mem alloc fail!");
		return (EXIT_FAILURE);
	}
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (file_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n" argv[2]);
		exit(99);
	}
	while ((bytes_read += read(file_from, buffer, 1024)) > 0)
		;
	if (write(file_to, buffer, bytes_read) == -1)
	{
		fprintf(sterr, "Error: Can't write to %s\n" argv[2]);
		exit(99);
	}
	if ((close(file_from)) == -1)
	{
		fprintf(stderr, "Can't close fd %i", file_from);
		exit(100);
	}
	else if ((close(file_to)) == -1)
	{
		fprintf(stderr, "Can't close fd %i", file_to);
		exit(100);
	}
	free(buffer);
	return (EXIT_SUCCESS);

}
