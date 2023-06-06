#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a list
 * @head: a pointer that points to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listPtr node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
