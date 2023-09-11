#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name != NULL)
	{
		doggo->name = malloc(strlen(name) + 1);
		if (doggo->name == NULL)
		{
			free(doggo->name);
			return (NULL);
		}
		doggo->name = strcpy(doggo->name, name);
	}

	if (owner != NULL)
	{
		doggo->owner = malloc(strlen(owner) + 1);
		if (doggo->owner == NULL)
		{
			free(doggo->owner);
			return (NULL);
		}
		doggo->owner = strcpy(doggo->owner, owner);
	}
	doggo->age = age;
	return (doggo);
}

