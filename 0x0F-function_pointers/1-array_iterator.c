#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter on
 * each element of the array.
 * @array: the array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
