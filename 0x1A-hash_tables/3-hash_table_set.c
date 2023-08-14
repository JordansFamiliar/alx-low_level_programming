#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update.
 * @key: the key.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *key_c, *value_c;

	/* check inputs */
	if (ht == NULL || key == NULL)
		return (0);
	/* generate an index */
	index = key_index((unsigned char *)key, ht->size);
	key_c = strdup(key);
	if (key_c == NULL)
		return (0);
	value_c = strdup(value);
	if (value_c == NULL)
	{
		free(key_c);
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(key_c);
		free(value_c);
		return (0);
	}
	new_node->key = key_c;
	new_node->value = value_c;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
