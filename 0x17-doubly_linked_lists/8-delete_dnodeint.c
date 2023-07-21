#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - a function that deletes the node at index of
 * a linked list
 * @head: a pointer to the head node
 * @index: the index of the node to be deleted
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (node != NULL)
	{
		if (index == 0)
		{
			if (node->next != NULL)
				node->next->prev = NULL;
			*head = node->next;
			free(node);
			return (1);
		}
		if (count == index)
		{
			node->prev->next = node->next;
			node->next->prev = node->prev;
			free(node);
			return (1);
		}
		++count;
		node = node->next;
	}
	return (-1);
}
