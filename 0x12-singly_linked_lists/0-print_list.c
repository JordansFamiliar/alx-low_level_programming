#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	if (h != NULL)
	{
		if (h->next == NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			return (++num);
		}
		else
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			return (++num + print_list(h->next));
		}
	}
	return (num);
}
