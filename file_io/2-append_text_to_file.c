#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
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
/**
 * append_text_to_file - appends text a the end of a file.
 * @filename: the name of the file or relative path.
 * @text_content: string to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	ssize_t written_count = 0;

	if (fd == -1)
	{
		perror("Couldn't open file!");
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (-1);
	}
	written_count = write(fd, text_content, _strlen(text_content));
	if (written_count >= 0)
	{
		close(fd);
		return (1);
	}
	else
	{
		perror("Couldn't write to file!");
		close(fd);
		return (-1);
	}
}
