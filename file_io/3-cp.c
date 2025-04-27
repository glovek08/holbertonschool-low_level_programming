#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit codes on error
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t r;
	char buf[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), close(file_from), exit(99);
	while ((r = read(file_from, buf, 1024)) > 0)
		if (write(file_to, buf, r) != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]),
					close(file_from), close(file_to), exit(99);
	if (r < 0)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
				close(file_from), close(file_to), exit(98);
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
