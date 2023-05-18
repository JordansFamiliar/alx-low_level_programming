#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s = NULL;
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (s);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (s);
	ptr = (char *)s;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (s);
}
