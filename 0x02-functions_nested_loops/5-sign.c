#include "main.h"
#include <stdio.h>

/**
* print_sign - prints sign of n
* @n: first argument
*
* Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	int retval;
	char a = '0';
	char b = '+';
	char c = '-';

	if (n == 0)
	{
		_putchar(a);
		retval = 0;
	}
	if (n > 0)
	{
		_putchar(b);
		retval = 1;
	}
	if (n < 0)
	{
		_putchar(c);
		retval = -1;
	}

	_putchar(',');
	_putchar(' ');
	return (retval);
}
