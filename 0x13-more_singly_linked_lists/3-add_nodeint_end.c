#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the first node
 * @n: number
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listPtr new = malloc(sizeof(listint_t));
	listPtr temp = *head;

	if (new == NULL)
		return (NULL);
	if (temp == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			new->n = n;
			new->next = NULL;
			temp->next = new;
			break;
		}
		temp = temp->next;
	}
	return (new);
}
