#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: the destination where the memory will be copied.
 * @src: the source memory area.
 * @num: the number of bytes to be copied.
 * Return: a pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int num)
{
unsigned int i = 0;
char *temp_dest = dest;

while (i < num)
{
*dest = *src;
dest++;
src++;
i++;
}
return (temp_dest);
}
