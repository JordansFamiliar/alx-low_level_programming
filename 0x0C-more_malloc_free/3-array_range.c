#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 * Return: int *
 */
int *array_range(int min, int max)
{
	int i, x, *n = NULL;

	if (min > max)
		return (n);
	n = malloc((max + 1 - min) *sizeof(int));
	if (n == NULL)
		return (n);
	for (i = 0, x = min; x <= max; i++)
	{
		n[i] = x;
		x++;
	}
	return (n);
}
