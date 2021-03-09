#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return string length
 * @s: pointer to a string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strcpy - copy string from source string to destination
 * @dest: pointer to a destination string
 * @src: pointer to the source string
 *
 */
void _strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++, src++;
	}
	*dest = '\0';
}

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
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
