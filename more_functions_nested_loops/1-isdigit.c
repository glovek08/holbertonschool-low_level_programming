#include "main.h"
/**
 * _isdigit - checks for a digit.
 * @digit: the digit to be checked.
 * Return: 1 if 'digit' is a digit, 0 otherwise.
 */
int _isdigit(int digit)
{
	return ((digit > 47 && digit < 58) ? 1 : 0);
}
