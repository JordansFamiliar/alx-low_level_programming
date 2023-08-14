#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			free(temp->key);
			free(temp->value);
			node = node->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
