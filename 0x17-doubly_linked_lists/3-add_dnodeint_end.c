#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the end of a list
 * @head: a pointer to the head node
 * @n: number
 * Return: the address of the new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *node;

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
		new_node->prev = node;
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
