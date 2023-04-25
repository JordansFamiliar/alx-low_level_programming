#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints to stdout
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int a, b;

	a = 97;
	b = 1;

	while (b < 11)
	{
		while (a < 123)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
