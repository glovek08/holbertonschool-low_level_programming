#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all dogs!.
 * @d: the dog struct to be freed.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
