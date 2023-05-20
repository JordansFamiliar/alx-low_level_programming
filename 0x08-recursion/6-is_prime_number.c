#include "main.h"

/**
 * division - helper function for is_prime_number
 * @n: number
 * @i: denominator
 * Return: int
 */
int division(int n, int i)
{
	if (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		if (n % i != 0)
			return (division(n, i + 1));
	}
	return (1);
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n <= 1)
		return (0);
	return (division(n, 2));
}
