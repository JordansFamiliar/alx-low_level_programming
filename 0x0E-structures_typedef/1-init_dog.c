#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable of type struct dog
 * @d: struct
 * @name: name
 * @age: age of dog
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}