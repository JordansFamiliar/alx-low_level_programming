#include "main.h"

/**
* _isdigit - checks if input is a digit
* @c: First argument
* Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)
{
	int retval;

	if (c >= 48 && c <= 57)
		retval = 1;
	else
		retval = 0;

	return (retval);
}
