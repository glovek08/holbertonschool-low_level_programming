#include "main.h"
/**
 * _isupper - checks if the given character is uppercase or not.
 * @c: the character.
 * Return: 1 if 'c' is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return ((c > 64 && c < 91) ? 1 : 0);
}
