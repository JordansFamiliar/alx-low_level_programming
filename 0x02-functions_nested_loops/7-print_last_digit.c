#include "main.h"
#include <limits.h>

/**
* print_last_digit - prints last digit
* @i: first argument
*
* Return: returns the last digit of i
*/
int print_last_digit(int i)
{
	int retval;

	if (i >= 10 || i <= -10 || i == INT_MIN)
	{
		i = i % 10;
	}
	else if (i < 0)
		i = -i;
	retval = i;
	_putchar(i + '0');
	return (retval);
}
