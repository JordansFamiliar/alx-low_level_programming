#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Return: 0 success
*/
int main(void)
{
	long int n = 612852475143;
	long int prime;

	while (n % 2 == 0)
	{
		prime = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			prime = i;
			n /= i;
		}
	}

	print_prime_factor(prime);
	_putchar('\n');
	return (0);
}
