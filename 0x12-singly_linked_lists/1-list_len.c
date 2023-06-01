#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
	{
		if (h->next == NULL)
			return (1);
		else
			return (1 + list_len(h->next));
	}
	return (0);
}
