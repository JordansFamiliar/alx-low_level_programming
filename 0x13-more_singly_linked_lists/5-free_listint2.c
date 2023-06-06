#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a list
 * @head: pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listPtr current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
	        *head = current;
	}
	*head = NULL;
}
