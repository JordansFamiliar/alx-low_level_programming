#include "main.h"

/**
* print_triangle - prints a triangle
* @n: first argument
* Return: void
*/
void print_triangle(int n)
{
	int a, b, x, i, j;

	for (; n > 0; n--)
	{
		for (a = 1; a <= n; a++)
		{
			i = n - a;
			j = n - i;
			for (x = 0; x < i; x++)
				_putchar(' ');
			for (; j <= n; j++)
				_putchar('#');
			_putchar('\n');
			break;
		}
	}
	if (n <= 0)
		_putchar('\n');
}
