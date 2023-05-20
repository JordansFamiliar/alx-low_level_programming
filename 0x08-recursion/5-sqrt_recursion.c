#include "main.h"

/**
 * int_division - helper function
 * @n: number
 * @i: denominator
 * Return: int
 */
int int_division(int n, int i)
{
	if (n / i == i && n % i == 0)
		return (i);
	if (n / i < i)
		return (-1);
	else
		return (int_division(n, i + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	else
		return (int_division(n, 1));
}
