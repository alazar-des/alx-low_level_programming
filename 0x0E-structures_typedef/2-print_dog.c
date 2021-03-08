#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print elements of dog struct
 * @d: pointer to dog struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %.1f\n", d->age);
	d->name != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
