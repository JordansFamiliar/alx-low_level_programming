#include "hash_tables.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	bool printed = false;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed == true)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = true;
			node = node->next;
		}
	}
	printf("}\n");
}
