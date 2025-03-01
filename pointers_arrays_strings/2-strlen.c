#include "main.h"
/**
 * _strlen - Returns the length of a given string by its pointer.
 * @str: The given string.
 * Return: The difference between the start and end of the string.
 */
int _strlen(char *str)
{
char *firstChar = str;

while (*str)
str++;
return (str - firstChar);
}
