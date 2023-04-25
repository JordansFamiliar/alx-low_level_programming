#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_to_98 - prints numbers to 98
* @i: first argument
*
* Return: void
*/
void print_to_98(int i)
{
	int digit;

	if (i < 98)
	{
		while (i <= 98)
		{
			if (i >= 10)
			{
				digit = i / 10 + '0';
				_putchar(digit);
				digit = i % 10 + '0';
				_putchar(digit);
			}
			if (i < 10)
				_putchar(i + '0');
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			digit = i / 10 + '0';
			_putchar(digit);
			digit = i % 10 + '0';
			_putchar(digit);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
	_putchar('\n');
}
