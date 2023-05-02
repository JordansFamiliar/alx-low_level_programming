#include "main.h"

/**
* swap_int - swaps values of two integers
* @a: first argument
* @b: second argument
* Return: void
*/

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;

	j = *b;

	*a = j;

	*b = i;
}
