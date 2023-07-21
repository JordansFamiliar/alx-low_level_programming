#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked
 * list
 * @h: a pointer to the head node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}
	return (count);
}
