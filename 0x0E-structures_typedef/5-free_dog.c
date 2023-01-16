#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dog
 * @d: a pointer to the typedef dog_t
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
