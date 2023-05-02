#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array
* @a: first argument
* @n: second arument
* Return: void
*/

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}