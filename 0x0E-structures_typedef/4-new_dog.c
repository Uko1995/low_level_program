#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
