#include "main.h"
/**
 * rev_string - reverses a string by its pointer.
 * @str: the given string.
 * Return: void.
 */
void rev_string(char *str)
{
char *strEnd = str;

while (*strEnd)
{
strEnd++;
}
strEnd--;
while (str < strEnd)
{
char temp = *str;
*str = *strEnd;
*strEnd = temp;
str++;
strEnd--;
}
return;
}
