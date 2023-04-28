#include "main.h"

/**
* _isupper - checks the character case
* @c: First argument
* Return: 1 if uppercase, 0 if lower
*/
int _isupper(int c)
{
	int retval;

	if (c >= 65 && c <= 90)
		retval = 1;
	else
		retval = 0;

	return (retval);
}
