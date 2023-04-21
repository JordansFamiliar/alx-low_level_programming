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
	a = i;

	while (i < 90)
	{
		putchar((i % 10 + '0'));
		if ((i - 9) % 10 == 0)
		{
			a = a + 11;
			i = a;
			continue;
		}

		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
