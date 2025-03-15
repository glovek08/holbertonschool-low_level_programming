#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a dog structure.
 * @d: the dog structure.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (!d) return;
	char *name = !d->name ? "(nil)" : d->name, *owner = !d->owner ? "(nil)" : d->owner;
	printf("Name: %s\nAge: %f\nOwner: %s", name, d->age, owner);
	putchar('\n');
}
