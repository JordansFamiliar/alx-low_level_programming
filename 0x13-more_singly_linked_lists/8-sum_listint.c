#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - A function that returns the sum of all the data (n)
 * @head: pointer to the head node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listPtr node = head;

	for (i = 0; node != NULL; i++)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
