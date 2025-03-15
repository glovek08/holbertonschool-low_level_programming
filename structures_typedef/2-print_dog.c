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
	if (!d)
		return;
	(!d->name) ?
		printf("Name: (nil)\n") :
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(!d->owner) ?
		printf("Owner: (nil)") :
		printf("Owner: %s", d->owner);
	putchar('\n');
}
