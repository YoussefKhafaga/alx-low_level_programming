#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a dog name, age and owner
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		printf("Name: %s", d->name);
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner);
	}
}

