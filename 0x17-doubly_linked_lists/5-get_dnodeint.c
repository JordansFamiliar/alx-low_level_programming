#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * linked list
 * @head: pointer to the head node
 * @index: node to be returned
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node != NULL)
	{
		if (count == index)
			return (node);
		++count;
		node = node->next;
	}
	return (NULL);
}
