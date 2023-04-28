#include "main.h"

/**
* print_line - prints a line
* @n: first argument
* Return: void
*/
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
		_putchar('\n');
	}
}
