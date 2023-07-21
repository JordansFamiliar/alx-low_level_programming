#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a linked list
 * @head: pointer to the head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
