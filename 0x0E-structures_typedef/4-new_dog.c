#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (d);
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (d);
	}
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (d);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
