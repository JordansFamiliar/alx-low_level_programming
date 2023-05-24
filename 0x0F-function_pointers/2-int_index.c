#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: an array of integers
 * @size: size of array
 * @cmp: pointer to a function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size && array != NULL && cmp != NULL; i++)
	{
		val = cmp(array[i]);
		if (val != 0)
			return (i);
	}
	return (-1);
}
