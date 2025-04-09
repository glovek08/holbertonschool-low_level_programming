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
	char *buffer = malloc(letters);

	if (!buffer)
		return (0);

	if (fd == -1)
	{
		perror("Couldn't open file!");
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters - 1);
	if (bytes_read == -1)
	{
		perror("Couldn't read file!");
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[bytes_read] = '\0';
	printf("%s\n", buffer);
	free(buffer);
	close(fd);
	return (bytes_read);
}
