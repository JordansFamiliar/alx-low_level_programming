#include "main.h"

/**
* reverse_array - reverse the elements in an array
* @a: the array
* @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int i[100];
	int j = 0;
	int k = 0;

	for (k = n - 1; k >= 0; k--)
	{
		i[j] = a[k];
		j++;
	}
	for (k = 0; k < n; k++)
	{
		a[k] = i[k];
	}
}
