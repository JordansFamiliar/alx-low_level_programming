#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: previous memory size
 * @new_size: new memory size
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;
	unsigned int i;
	unsigned char *src, *dest;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (p);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (p);
	}
	src = (unsigned char *)ptr;
	dest = (unsigned char *)p;
	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (p);
}
