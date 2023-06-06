#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer to the head node
 * @index: the nth node
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listPtr node = head;

	for (i = 0; i <= index && node != NULL; i++)
	{
		if (i < index)
			node = node->next;
		if (i == index)
			return (node);
	}
	return (NULL);
}
