#include "main.h"

/**
* puts_half - prints half of a string
* @str: the first argument
* Return: void
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		i++;
	}
	i -= 1;

	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	else
		j = i / 2;
	for (; j <= i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
