#include "main.h"

/**
* puts2 - prints every other character
* @str: first argument
* Return: void
*/

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (j % 2 != 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
