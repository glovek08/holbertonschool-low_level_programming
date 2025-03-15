#ifndef TEST_H
#define TEST_H

/**
 * struct dog - generate a new dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: who owns the dog.
 *
 * Description: Generates a new dog structure.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* TEST_H */
