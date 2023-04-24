#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* prints numbers to stdout
* Return: returns 0
*/
int main(void)
{
	/* define */
	int i;
	int a;

	/* init */
	i = 1;
	a = 1;

	while (i < 90)
	{
		if (i % 10 == 9)
		{
			a += 11;
			i = a;
			putchar((i % 10 + '0'));
			continue;
		}

		if (i < 89)
		{
			putchar((i % 10 + '0'));
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
