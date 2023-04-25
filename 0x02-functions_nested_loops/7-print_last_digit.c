#include "main.h"

/**
* print_last_digit - prints last digit
* @i: first argument
*
* Return: returns the last digit of i
*/
int print_last_digit(int i)
{
	int retval = i % 10;

	_putchar((i + '0'));
	return (retval);
}
