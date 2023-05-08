#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of 2 diagonals
* @a: array
* @size: size of matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, counter1, counter2;

	counter1 = counter2 = 0;
	for (i = 0; i < size; i++)
	{
		counter1 += *(a + i * size + i);
		counter2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", counter1, counter2);
}
