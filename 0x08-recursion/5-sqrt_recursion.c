#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int rt, i;

	if (n == 0 || n == 1)
		return (n);
	rt = _sqrt_recursion(n - 1);
	i = n - rt * rt;

	if (i == 0)
		return (rt);
	else if (rt * rt == n)
		return (rt);
	else
		return (-1);
}
