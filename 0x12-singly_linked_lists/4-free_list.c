#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list
 * @head: a pointer to the beginning of a list
 * Return: void
 */
void free_list(list_t *head)
{
	listPtr current = head;
	listPtr next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
