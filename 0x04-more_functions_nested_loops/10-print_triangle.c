#include "main.h"

/**
* print_triangle - prints a triangle
* @n: first argument
* Return: void
*/
void print_triangle(int n)
{
	int a, b, i;

	if (n > 0)
	{
		for (i = 1; i <= 10; i++)
		{
			for (a = 10 - i; a > 0; a--)
			{
				_putchar(' ');
			}
			for (b = i; b > 0; b--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
