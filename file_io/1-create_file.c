#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 * create_file - create a new file.
 * @filename: the name of the file and relative path.
 * @text_content: content to insert into the new file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t written_count = 0;

	if (fd == -1)
	{
		perror("Couldn't create file!");
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	written_count = write(fd, text_content, _strlen(text_content));
	if (written_count == -1)
	{
		close(fd);
		perror("Couldn't write to file!");
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - returns the length of a given string.
 * @str: the given string.
 *
 * Return: the length of @str.
 */
size_t _strlen(const char *str)
{
	const char *s = str;

	while (*s)
		++s;
	return (s - str);
}
