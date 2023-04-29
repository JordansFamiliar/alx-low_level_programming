#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_prime_factor(long int);
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
/**
* print_prime_factor - prints the prime factor
* @n: first argument
* Return: void
*/
void print_prime_factor(long int n)
{
	int i = 0;
	int j;
	char *str[13];

	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
}
