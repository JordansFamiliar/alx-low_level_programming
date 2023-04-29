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
	long int prime = -1;
	long int factor;

	for (factor = 2; factor * factor <= n; factor++)
	{
		while (n % factor)
		{
			prime = factor;
			n /= factor;
		}
	}

	print_prime_factor(prime);
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
