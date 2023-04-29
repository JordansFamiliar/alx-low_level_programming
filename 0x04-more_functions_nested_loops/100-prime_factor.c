#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_prime_factor(long long);
/**
* main - entry point
*
* Return: 0 success
*/
int main(void)
{
	long long n = 612852475143;
	long long prime = -1;
	long long factor, i;

	for (factor = n; factor >= 1; factor--)
	{
		if (n % factor == 0)
		{
			for (i = factor; i >= 1; i--)
			{
				if (factor % i == 0 && i != factor && i != 1)
				{
					break;
				}
				if (i == 1)
				{
					prime = factor;
					break;
				}
			}
			if (prime == factor)
			{
				print_prime_factor(prime);
				break;
			}
		}
	}
	return (0);
}
/**
* print_prime_factor - prints the prime factor
* @n: first argument
* Return: void
*/
void print_prime_factor(long long n)
{
	int i = 0;
	int j;
	char *str = (char *) malloc(20 * sizeof(char));

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
	free(str);
}
