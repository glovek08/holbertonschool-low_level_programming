#include "main.h"
/**
 * _strstr - searches for a subtstring ocurrance in a given string.
 * @haystack: the given string.
 * @needle: the substring to be found in @haystack.
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ocurrance = '\0';
	int match = 0;

	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			char *curr_haystack = haystack;
			char *curr_needle = needle;

			match = 1;
			while (*curr_haystack && *curr_needle)
			{
				if (*curr_haystack != *curr_needle)
				{
					match = 0;
					break;
				}
				curr_haystack++;
				curr_needle++;
			}
			if (match && *curr_needle == '\0')
			{
				ocurrance = haystack;
				break;
			}
		}
	}
	return (ocurrance);
}
