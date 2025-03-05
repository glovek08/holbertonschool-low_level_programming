#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strchr - locates a character in a string.
* @str: the string to be checked.
* @ch: the character to be found.
* Return: pointer to the first ocurrance of the character 'c' in the string
* 'str'. NULL if character is not found.
*/
char *_strchr(char *str, char ch)
{
	    int i = 0;

	    for (; i < sizeof(str); i++)
	    {
		if (str[i] == ch)
		{
		    return (str);
		}
	    }
    return (NULL);
}
