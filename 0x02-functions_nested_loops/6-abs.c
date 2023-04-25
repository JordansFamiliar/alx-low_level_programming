#include "main.h"
#include <stdio.h>

/**
* _abs - prints absolute value
* @i: first argument
*
* Return: 0
*/
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
		_putchar((i + '0'));
	}
	else
		_putchar((i + '0'));
	return (0);
}
