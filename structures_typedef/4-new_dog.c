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
	char name_cpy = *name, owner_cpy = *owner;

	doggy = malloc(sizeof(dog_t));
	if (!doggy)
		return (NULL);

	doggy->name = &name_cpy;
	doggy->age = age;
	doggy->owner = &owner_cpy;

	return (doggy);
}
