#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - a function that retrieves a value
 * associated with a key.
 * @ht: is the hash table.
 * @key: the key you are looking for
 * Return: the value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *retval;

	if (ht == NULL || key == NULL)
		return (NULL);
	/* get the index associated with the key */
	index = key_index((unsigned char *)key, ht->size);
	retval = (ht->array[index] == NULL) ? NULL : (ht->array[index])->value;
	return (retval);
}
