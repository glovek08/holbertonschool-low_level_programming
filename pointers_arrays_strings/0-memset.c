#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @str: the string to be filled.
 * @b: the constant byte.
 * @num: the first number of bytes to be filled.
 * Return: pointer to @str.
 */
char *_memset(char *str, char b, unsigned int num)
{
char *temp_str = str;
unsigned int i = 0;

while (i < num)
{
*str = b;
str++;
i++;
}
return (temp_str);
}
