#include "main.h"
#include <stdio.h>

/**
* print_diagsum - prints the sum of 2 diagonals
* @a: array
* @size: size of matrix
* Return: void
*/

void print_diagsum(int *a, int size)
{
	int i, counter;

	i = counter = 0;
	while (i < size)
	{
		counter += *(a + i * size + i);
		i++;
	}
	printf("%d, ", counter);
	i = counter = 0;
	while (i < size)
	{
		counter += *(a + i * size + (size - i - 1));
		i++;
	}
	printf("%d\n", counter);
}
