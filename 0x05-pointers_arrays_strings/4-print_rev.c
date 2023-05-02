#include "main.h"

/**
* print_rev - prints string in reverse
* @s: first argument
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
