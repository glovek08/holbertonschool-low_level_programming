#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a new variable using the dog constructor.
 * @d: pointer to the dog constructor.
 * @name: pointer to the dog's name.
 * @age: the dog's age.
 * @owner: pointer to the dog's owner.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
