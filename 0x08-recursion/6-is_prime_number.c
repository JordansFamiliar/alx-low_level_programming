#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 1)
		return (0);
	if (n >= 1)
	{
		if (n % is_prime_number(n - 1) == 0 && n != 1)
			return (0);
	}
	return (1);
}
