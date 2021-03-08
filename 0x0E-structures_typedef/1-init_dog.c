#include "dog.h"

/**
 * init_dog - initialize a dog struc data type
 * @d: a pointer to the struct
 * @name: a name string of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
