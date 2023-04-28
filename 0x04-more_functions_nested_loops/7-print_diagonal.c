#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: First argument
* Return: void
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = a; b > 0; b--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
