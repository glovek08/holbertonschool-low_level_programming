#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the stdout (POSIX).
 * @filename: the file's name and path.
 * @letters: numbers of bits to read and print.
 *
 * Return: the actual number of letters it could read and print. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	int fd = open(filename, O_RDONLY);
	ssize_t write_count = 0;
	char *buffer = malloc(letters);

	if (!buffer)
		return (0);

	if (fd == -1)
	{
		perror("Couldn't open file!");
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		perror("Couldn't read file!");
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[bytes_read] = '\0';
	write_count = write(1, buffer, bytes_read);
	free(buffer);
	close(fd);
	return (write_count);
}
