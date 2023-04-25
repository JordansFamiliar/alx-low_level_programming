#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints to stdout
*
* Return: void
*/
void print_alphabet(void)
{
	int i = 97;

	while (i <  123)
	{
		_putchar(i);
		if (i == 122)
		{
			_putchar('\n');
		}
		i++;
	}
}
