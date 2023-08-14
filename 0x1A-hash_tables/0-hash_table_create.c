#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - a function that creayes a hash table.
 * @size: The size of the table
 * Return: A pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL || size == 0)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
