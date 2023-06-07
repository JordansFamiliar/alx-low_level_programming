#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - a function that reverses a list
 * @head: pointer to the head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listPtr node, prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head)
	{
		node = *head;
		*head = node->next;
		node->next = prev;
		prev = node;
	}
	*head = prev;
	return (prev);
}
