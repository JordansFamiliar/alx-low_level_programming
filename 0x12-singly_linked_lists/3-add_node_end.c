#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the start of the list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	listPtr new_node;

	if (head != NULL)
	{
		if (*head == NULL)
		{
			new_node = malloc(sizeof(list_t));
			if (new_node == NULL)
				return (NULL);
			new_node->str = strdup(str);
			if (new_node->str == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new_node->len = strlen(str);
			new_node->next = NULL;
			*head = new_node;
			return (new_node);
		}
		else
			return (add_node_end(&((*head)->next), str));
	}
	return (NULL);
}
