#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - a function that gives you the index of a key.
 * @key: the key.
 * @size: the size of the array of the hash table.
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int retval;

	/* check the input */
	if (key == NULL || size == 0)
		return (0);
	retval = hash_djb2(key) % size;
	while (retval > size)
		retval = retval % size;
	return (retval);
}
