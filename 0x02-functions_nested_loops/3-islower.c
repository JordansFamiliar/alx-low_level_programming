#include <stdio.h>
#include "main.h"

/**
* _islower - determines if char is upper or lowercase
* @c: first operand
*
* Return: 1 if lowercase 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
