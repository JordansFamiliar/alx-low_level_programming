#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	static int n;

	n = 0;
	if (*s)
	{
		++n;
		_strlen_recursion(s + 1);
	}
	return (n);
}
