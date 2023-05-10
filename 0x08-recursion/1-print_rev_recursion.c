#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Retuen: void
 */
void _print_rev_recursion(char *s)
{
	static int n;
	int i;

	n = 0;
	if (*s)
	{
		++n;
		_print_rev_recursion(s + 1);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(*(s - i));
		}
	}
}
