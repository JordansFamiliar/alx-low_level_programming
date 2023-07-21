#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position
 * @h: pointer to the head node
 * @idx: index to insert new node
 * @n: number added to new node
 * Return: pointer to the new node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *node;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	node = *h;
	if (node == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		*h = new_node;
		return (new_node);
	}
	else
	{
		while (node->next != NULL)
		{
			if (count == idx - 1)
			{
				new_node->prev = (idx == 0) ? NULL : node;
				new_node->next = node->next;
				node->next->prev = new_node;
				node->next = new_node;
				new_node->n = n;
				return (new_node);
			}
			++count;
			node = node->next;
		}
	}
	return (NULL);
}
