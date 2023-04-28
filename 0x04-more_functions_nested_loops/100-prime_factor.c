#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* Return: 0 success
*/
int main(void)
{
	long long n = 612852475143;
	long long prime = -1;
	long factor, i;
	char str[20];

	snprintf(str, 20, "%lld", n);

	for (factor = n; factor >= 1; factor--)
	{
		/* find factors of n */
		if (n % factor == 0)
		{
			/* determine if factor is a prime num */
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
				printf("%lld\n", prime);
				break;
			}
		}
	}
	return (0);
}
