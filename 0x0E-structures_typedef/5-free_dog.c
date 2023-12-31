#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dogs from memory
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

