#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: the character.
 *  Return: 0 if "c" is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
