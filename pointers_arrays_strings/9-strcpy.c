#include "main.h"
/**
 * _strcpy - copies the string pointed by src including the null byte, to
 * the buffer pointed to by target.
 * @src: the destination buffer.
 * @dest: the source string.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *temp_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp_dest);
}
