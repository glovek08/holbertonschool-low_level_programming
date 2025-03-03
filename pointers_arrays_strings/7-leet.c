#include "main.h"
/**
 * leet - encrypts a string into leet LEEEEEET!! ( ͡° ͜ʖ ͡°).
 * @str: the string to be encrypted ( ͡° ͜ʖ ͡°).
 * Return: the string pointer ( ͡° ͜ʖ ͡°).
 */
char *leet(char *str)
{
int i = 0, j;
char characters[] = "aeotlAEOTL";
char numbers[] = "4307143071";

while (str[i])
{
for (j = 0; j < 10; j++)
{
if (str[i] == characters[j])
{
str[i] = numbers[j];
}
}
i++;
}
return (str);
}
