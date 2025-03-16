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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *);

#endif /* TEST_H */
