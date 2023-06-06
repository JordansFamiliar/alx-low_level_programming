#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a list and returns
 * the node's data
 * @head: pointer to the head node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listPtr node = *head;
	int data = node->n;

	*head = (*head)->next;
	free(node);
	return (data);
}
