#include "main.h"
#include <stdio.h>

/**
* _isalpha - determines if c is upper or lowercase
* @c: first argument
*
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
