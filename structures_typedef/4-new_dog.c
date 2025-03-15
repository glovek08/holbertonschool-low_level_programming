#include <stdlib.h>
#include <string.h>
#include "dog.h"
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

	name_cpy = malloc(strlen(name) + 1);
	if (!name_cpy)
		return (NULL);

	owner_cpy = malloc(strlen(owner) + 1);
	if (!owner_cpy)
	{
		free(name_cpy);
		return (NULL);
	}
	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}

	doggy->name = name_cpy;
	doggy->age = age;
	doggy->owner = owner_cpy;

	return (doggy);
}

