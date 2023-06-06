#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at an index of a linked list
 * @head: pointer to the head node
 * @index: index
 * Return: 1 if successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listPtr node = *head;
	listPtr temp;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	for (i = 0; i < index - 1 && node != NULL; i++)
		node = node->next;
	temp = node->next;
	if (temp == NULL)
		*head = NULL;
	else
		node->next = temp->next;
	free(temp);
	return (1);
}
