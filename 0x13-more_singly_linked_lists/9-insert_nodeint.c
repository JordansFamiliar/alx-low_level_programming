#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position
 * @head: a pointer to the head node
 * @idx: the position in the list
 * @n: number
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listPtr node = *head;
	listPtr new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	for (i = 1; i <= idx && node != NULL; i++)
	{
		if (i < idx)
		{
			node = node->next;
		}
		if (i == idx)
		{
			new->n = n;
			new->next = node->next;
			node->next = new;
			return (new);
		}
	}
	return (NULL);
}
