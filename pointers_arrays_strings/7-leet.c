#include "main.h"
/**
 * leet - 3ncrypts a str1ng 1nt0 1337 13333337!! ( ͡° ͜ʖ ͡°).
 * @str: th3 str1ng t0 b3 3ncrypt3d ( ͡° ͜ʖ ͡°).
 * Return: th3 str1ng p01nt3r ( ͡° ͜ʖ ͡°).
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
