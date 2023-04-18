#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d: dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(1);
	free(d->name);
	free(d->owner);
	free(d);
}
