#include "main.h"

/**
 * factorial - returns the factoral of a given number
 * @n: number
 * Return: int
 */
int factorial(int n)
{
	int retval = 1;

	if (n < 0)
		return (-1);
	if (n > 1)
		retval = n * factorial(n - 1);
	return (retval);
}
