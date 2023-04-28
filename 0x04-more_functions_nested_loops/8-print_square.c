#include "main.h"

/**
* print_square - print a square
* @n: first argument
* Return: void
*/
void print_square(int n)
{
	for (; n > 0; n--)
	{
		for (; n > 0; n--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
