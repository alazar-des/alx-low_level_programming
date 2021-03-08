#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated to dog struct
 * @d: pointer to the allocated memory
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
