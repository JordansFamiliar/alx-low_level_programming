#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * of a linked list
 * @head: A pointer to the head node
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
