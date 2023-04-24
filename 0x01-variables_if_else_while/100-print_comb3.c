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
	i = 0;
	a = 0;

	while (i < 9)
	{
		a = i + 1;
		while (a < 10)
		{
			if (i < 10)
			{
				putchar(('0' + i));
			}
			if (i >= 10)
			{
				putchar((i % 10 + '0'));
			}
			putchar((a % 10 + '0'));
			if (i == 8 && a == 9)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
			a++;
		}
		i++;
	}
	return (0);
}
