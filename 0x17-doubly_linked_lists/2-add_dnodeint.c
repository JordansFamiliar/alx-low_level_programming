#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function that
 * adds a new node at the beginning of a list
 * @head: pointer to the head node
 * @n: number
 * Return: the address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;

	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
