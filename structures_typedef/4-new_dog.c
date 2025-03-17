#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *name_cpy, *owner_cpy;
	int name_len = 0, owner_len = 0;
	int i;

	while (name[name_len]) name_len++;
	while (owner[owner_len]) owner_len++;
	
	doggy = malloc(sizeof(dog_t));
	if (!doggy) return (NULL);
	
	name_cpy = malloc(name_len + 1);
	if (!name_cpy) {
		free(doggy);
		return (NULL);
	}

	owner_cpy = malloc(owner_len + 1);
	if (!owner_cpy) {
		free(name_cpy);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++) name_cpy[i] = name[i];
	for (i = 0; i <= owner_len; i++) owner_cpy[i] = owner[i];
	
	doggy->name = name_cpy;
	doggy->age = age;
	doggy->owner = owner_cpy;

	return (doggy);
}
