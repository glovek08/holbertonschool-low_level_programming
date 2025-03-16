#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strcpy - Copies a string including the null terminator
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, const char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * _strlen - Calculates the length of a string manually
 * @str: Input string
 *
 * Return: Length of the string (excluding null terminator)
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * new_dog - creates a new god.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 *
 * Return: a new god.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *name_cpy, *owner_cpy;

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
		return (NULL);

	name_cpy = malloc(_strlen(name) + 1);
	if (!name_cpy)
	{
		free(doggy);
		return (NULL);
	}

	owner_cpy = malloc(_strlen(owner) + 1);
	if (!owner_cpy)
	{
		free(name_cpy);
		free(doggy);
		return (NULL);
	}

	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	doggy->name = name_cpy;
	doggy->age = age;
	doggy->owner = owner_cpy;

	return (doggy);
}

