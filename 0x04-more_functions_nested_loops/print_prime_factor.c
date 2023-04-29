#include "main.h"

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
