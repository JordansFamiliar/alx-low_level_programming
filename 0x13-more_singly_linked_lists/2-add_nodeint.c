#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the beginning of the list
 * @n: number
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listPtr new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (head == NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = *head;
	}
	*head = new;
	return (new);
}
