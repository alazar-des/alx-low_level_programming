#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog struct and initialize the elements
 * @name: name of the dog to initialize the element name
 * @age: for initialization the member element age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the struct on success, otherwise null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
