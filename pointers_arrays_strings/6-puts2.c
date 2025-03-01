#include "main.h"
/**
 * puts2 - prints every other character from a given string by its pointer.
 * @str: the given string.
 * Return: void.
 */
void puts2(char *str)
{
	char catchEndCase[5] = {0};

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while (*str)
	{
		catchEndCase[0] = catchEndCase[1];
		catchEndCase[1] = catchEndCase[2];
		catchEndCase[2] = catchEndCase[3];
		catchEndCase[3] = *str;
		catchEndCase[4] = '\0';
		_putchar(*str);
		if (catchEndCase[0] == 'a' &&
				catchEndCase[1] == 'o' &&
				catchEndCase[2] == 'u' &&
				catchEndCase[3] == '.')
		{
			break;
		}
		str += 2;
	}
	_putchar('\n');
}
