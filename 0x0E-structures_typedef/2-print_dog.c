#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *s = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d -> name == NULL) ? s : d -> name);
		if (d -> age <= 0.0)
			printf("Age: %s\n", s);
		else
			printf("Age: %.1f\n", d -> age);
		printf("Owner: %s\n", (d -> owner == NULL) ? s : d -> owner);
	}
}
