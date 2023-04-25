#include "main.h"

/**
* print_last_digit - prints last digit
* @i: first argument
*
* Return: returns the last digit of i
*/
int print_last_digit(int i)
{
	int retval;

	if (i < 0)
	{
		i = -(i);
	}
	if (i >= 10)
	{
		i = 1 % 10;
	}
	retval = i;
	return (retval);
}
