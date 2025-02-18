#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point.
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter (a-z), 0 otherwise.
 */

int _islower(int c)
{
	int currentLetter = 97;

	while (currentLetter <= 122)
	{
		if (c == currentLetter)
		{
			return (1);
		}
		else
		{
			currentLetter++;
		}
	}
	return (0);
}
